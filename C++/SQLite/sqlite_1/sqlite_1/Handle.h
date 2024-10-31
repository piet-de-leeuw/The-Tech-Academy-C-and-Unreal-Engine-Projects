#pragma once

#ifdef _DEBUG
	#include <crtdbg.h>
	#define ASSERT _ASSERTE
#else
	#define ASSERT __noop
#endif

template <typename T>
struct HandleTraits
{
	using Type = T;

	// A way to identify invalid handles
	// Every conrete traits class cann override it shoult thay want to spesify a non null value for invalide handles. 
	static Type Invalid() noexcept
	{
		return nullptr;
	}

	// We leave it undefined because we expect every concrete class to have one of its own.
	// static void Close(Type value) noexcept
};

template <typename Traits> 
class Handle
{
	// using the returntype from Traits::Invalid() to assign it to Type;
	using Type = decltype(Traits::Invalid());
	Type m_value;

	// Called in the destructor
	void Close() noexcept
	{
		if (*this)
		{
			Traits::Close(m_value); 
		}
	}

public:
	// Prohibit copy semantics
	Handle(Handle const&) = delete;
	Handle& operator=(Handle const&) = delete;


	// Default constructor
	explicit Handle(Type value = Traits::Invalid()) noexcept : 
		m_value(value)
	{}

	// Move semantics
	Handle(Handle && other) noexcept :
		m_value(other.Detach())
	{}

	Handle& operator=(Handle && other) noexcept
	{
		if (this != &other)
		{
			Reset(other.Detach());
		}

		return *this;
	}

	//Destructor
	~Handle() noexcept
	{
		Close();
	}

	// Bool operator used to check the validety of a Handle. (is called by if(*this))
	explicit operator bool() const noexcept
	{
		return m_value != Traits::Invalid();
	}

	// Get m_value
	Type Get() const noexcept
	{
		return m_value;
	}

	//a way to set the Handle indirectly. we will assert that it is invalid. and return it's address.
	//Where would this be used ? Well, many C style API's will return a handle as an out parameter 
	//via a pointer to a handle, often a pointer to a pointer.This set method will return the address of the handle,
	//so that such functions can set it, and the handle is immediately owned by the smart handle class.
	//The assertion is also vitally important as it insurers that such overwriting of handles is not done.When a handle is already owned.
	Type* Set() noexcept
	{
		ASSERT(!*this);
		return &m_value;
	}

	//Detach ownerschip from a handle.
	Type Detach() noexcept
	{
		Type value = m_value;
		m_value = Traits::Invalid();
		return value;
	}

	//A Way to safly attach handles even if a handle is already owned.
	bool Reset(Type value = Traits::Invalid()) noexcept
	{
		if (m_value != value)
		{
			Close();
			m_value = value;
		}

		return static_cast<bool>(*this);
	}

	//Swapping two handles
	void Swap(Handle<Traits>& other) noexcept
	{
		Type temp = m_value;
		m_value = other.m_value;
		other.m_value = temp;
	}
};

//Global swap
template <typename Traits>
void swap(Handle<Traits>& left, Handle<Traits>& right) noexcept
{
	left.Swap(right);
}

//Equalaty, notEquality comparisons.
template <typename Traits>
bool operator==(Handle<Traits> const& left, Handle<Traits> const& right)
{
	return left.Get() == right.Get();
}

template <typename Traits>
bool operator!=(Handle<Traits> const& left, Handle<Traits> const& right)
{
	return !(left == right);
}