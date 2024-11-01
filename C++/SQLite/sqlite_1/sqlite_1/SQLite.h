#pragma once

#include "Handle.h"
#include "sqlite3.h"
#include <string>

#ifdef _DEBUG
#define VERIFY ASSERT
#define VERIFY_(result, expression) ASSERT(result == expression)
#else
#define VERIFY(expression) (expression)
#define VERIFY_(result, expression) (expression)
#endif

struct Exception
{
	int Result = 0;
	std::string Message;

	explicit Exception(sqlite3* const connection) :
		Result(sqlite3_extended_errcode(connection)),
		Message(sqlite3_errmsg(connection))
	{}
};

class Connection
{
	struct ConnectionHandleTraits : HandleTraits<sqlite3*>
	{
		static void Close(Type value) noexcept
		{
			VERIFY_(SQLITE_OK, sqlite3_close(value));
		}
	};

	//ConnectionHandle = Handle<ConnectionHandleTraits>;
	  Handle<ConnectionHandleTraits> m_handle;

	  template <typename F, typename C>
	  void InternalOpen(F open, C const* const filename)
	  {
		  connection temp;

		  if (SQLITE_OK != open(filename, temp.m_handle.Set()))
		  {
			  throw temp.ThrowLastError();
		  }

		  swap(m_handle, temp.m_handle);
	  }

public:

	Connection() noexcept = default;

	template <typename C>
	explicit Connection(C const* const filename)
	{
		Open(filename);
	}

	static Connection Memory()
	{
		return Connection(":memory");
	}

	static Connection WideMemory()
	{
		return Connection(L":memory:");
	}

	explicit operator bool() const noexcept
	{
		return static_cast<bool>(m_handle);
	}

	sqlite3* GetAbi() const noexcept
	{
		return m_handle.Get();
	}

	__declspec(noreturn) void ThrowLastError() const
	{
		throw Exception(GetAbi());
	}

	void Open(char const* const filename)
	{
		InternalOpen(sqlite3_open, filename);
	}

	void Open(wchar_t const* const filename)
	{
		InternalOpen(sqlite3_open16, filename);
	}
};

class Statement
{
	struct StatementHandleTraits : HandleTraits<sqlite3_stmt*>
	{
		static void Close(Type value) noexcept
		{
			VERIFY_(SQLITE_OK, sqlite3_finalize(value));
		}
	};

	Handle<StatementHandleTraits> m_handle;

	template <typename F, typename C>
	void InternalPrepate(Connection const& connection, F prepare, C const* const text)
	{
		ASSERT(connection);

		if (SQLITE_OK != prepare(connection.GetAbi(), text, -1, m_handle.Set(), nullptr))
		{
			connection.ThrowLastError();
		}
	}

public:

	Statement() noexcept = default;

	explicit operator bool() const noexcept
	{
		return static_cast<bool>(m_handle);
	}

	sqlite3_stmt* GetAbi() const noexcept
	{
		return m_handle.Get();
	}

	__declspec(noreturn) void ThrowLastError() const
	{
		throw Exception(sqlite3_db_handle(GetAbi()));
	}

	void Prepare(Connection const& connection, char const* const text)
	{
		InternalPrepate(connection, sqlite3_prepare_v2, text);
	}

	void Prepare(Connection const& connection, wchar_t const* const text)
	{
		InternalPrepate(connection, sqlite3_prepare16_v2, text);
	}


	bool Step() const
	{
		int const result = sqlite3_step(GetAbi());

		if (result == SQLITE_ROW) { return true; }
		if (result == SQLITE_DONE) { return false; }

		ThrowLastError();
	}

	// Ensure that during development step returns expected done-resultcode for non querys
	void Execute() const
	{
		VERIFY(!Step());
	}
};