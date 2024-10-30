#include "sqlite3.h"
#include <stdio.h>
#include "Handle.h"

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

int main()
{
	//sqlite3* connection = nullptr;
	ConnectionHandle connection;

	int result = sqlite3_open(":memory:", connection.Set());

	if (SQLITE_OK != result)
	{
		printf("%s\n", sqlite3_errmsg(connection.Get()));
		//sqlite3_close(connection);
		return result;
	}

	//sqlite3_stmt* query = nullptr;

	//result = sqlite3_prepare_v2(connection, "select 'Hello world'", -1, &query, nullptr);

	//if (SQLITE_OK != result)
	//{
	//	printf("%s\n", sqlite3_errmsg(connection));
	//	sqlite3_close(connection);
	//	return result;
	//}

	//while (SQLITE_ROW == sqlite3_step(query))
	//{
	//	printf("%s\n", sqlite3_column_text(query, 0));
	//}

	//sqlite3_finalize(query);
	//sqlite3_close(connection);

}


