#include <stdio.h>
#include "SQLite.h"



int main()
{

	try
	{
		Connection connection = Connection::Memory();
	}
	catch (Exception const &e)
	{
		printf("%s (%d)\n", e.Message.c_str(), e.Result); 
	}




	//if (SQLITE_OK != result)
	//{
	//	printf("%s\n", sqlite3_errmsg(connection.Get()));
	//	//sqlite3_close(connection);
	//	return result;
	//}

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


