#pragma once

#include "Handle.h"
#include "sqlite3.h"

#ifdef _DEBUG
#define VERIFY ASSERT
#define VERIFY_(result, expression) ASSERT(result == expression)
#else
#define VERIFY(expression) (expression)
#define VERIFY_(result, expression) (expression)
#endif

struct ConnectionHandleTraits : HandleTraits<sqlite3*>
{
	static void Close(Type value) noexcept
	{
		VERIFY_(SQLITE_OK, sqlite3_close(value));
	}
};

using ConnectionHandle = Handle<ConnectionHandleTraits>;

