#include <stdio.h>
#include "SQLite.h"

static char const* TypeName(Type const type)
{
	switch (type)
	{
	case Type::Integer: return "Integer";
	case Type::Float: return "Float";
	case Type::Blob: return "Blob";
	case Type::Null: return "Null";
	case Type::Text: return "Text";
	}

	ASSERT(false);
	return "Invalid";
}

static void SaveToDisk(Connection const& source, char const* const filename)
{
	Connection destination(filename);
	Backup backup(destination, source);
	backup.Step();
}

int main()
{

	try
	{
		Connection connection = Connection::Memory();

		Execute(connection, "create table Things (Content)");
		
		Statement statement(connection, "insert into Things values (?)");

		Execute(connection, "begin");

		for (int i = 0; i != 1000000; i++)
		{
			statement.Reset(i);
			statement.Execute();
		}

		Execute(connection, "commit");

		Execute(connection, "delete from Things where Content > 10 ");
		
		//Releasing all space that is freed by the delete comand. (Rebuilds the DB)
		Execute(connection, "vacuum");

		SaveToDisk(connection, "C:\\temp\\backup.db");

		//connection.Profile([](void*, char const* const statment, unsigned long long const time)
		//	{
		//		// convert from nano-seconds to milli-second
		//		unsigned long long const ms = time / 1000000;

		//		if (ms > 10)
		//		{
		//			printf("Porfiler (%lld) %s\n", ms, statment);
		//		}
		//	});

		////Transaction Begin and end (commit)
		//Connection connection("C:\\temp\\count.db");
		//Execute(connection, "Create table Things (Content)");

		//Statement insert(connection, "insert into Things (Content) values (?)");
		//// begin transaction
		//Execute(connection, "begin");

		//for (int i = 0; i != 1000; i++)
		//{
		//	insert.Reset(i);
		//	insert.Execute();
		//}

		//// End transaction
		//Execute(connection, "commit");

		//Statement count(connection, "select count(*) from Things");
		//count.Step();
		//printf("count: %d\n", count.GetInt());

		//Execute(connection, "create table Hens (Name)");

		//Execute(connection, "insert into Hens (Name) values (?)", "Beth");
		//printf("Inserted %lld\n", connection.RowId());
		//Execute(connection, "insert into Hens (Name) values (?)", "Marge");
		//printf("Inserted %lld\n", connection.RowId());

		//// This part shows how a type specified in the column affects types stored in the column
		//Execute(connection, "create table Things (Somthing,Another real,Content text)");

		//Execute(connection, "insert into Things values (?,?,?)", "Joe", "Joe", "Joe");
		//Execute(connection, "insert into Things values (?,?,?)", 123, 123, 123);

		//for (Row row : Statement(connection, "select Somthing from Things"))
		//{
		//	printf("%s: %s\n", TypeName(row.GetType()), row.GetString());
		//}

		//for (Row row : Statement(connection, "select Another from Things"))
		//{
		//	printf("%s: %s\n", TypeName(row.GetType()), row.GetString());
		//}

		//for (Row row : Statement(connection, "select Content from Things"))
		//{
		//	printf("%s: %s\n", TypeName(row.GetType()), row.GetString());
		//}

		////Excample of ceating a table and printing the values.
		//Execute(connection, "create table Users (Name)");

		//Execute(connection, "insert into Users values (?)", "Jack");
		//Execute(connection, "insert into Users values (?)", "Beth");
		//
		//for (Row row : Statement(connection, "select Name from Users"))
		//{
		//	printf("%s\n", row.GetString());
		//}
	}
	catch (Exception const &e)
	{
		printf("%s (%d)\n", e.Message.c_str(), e.Result); 
	}

}


