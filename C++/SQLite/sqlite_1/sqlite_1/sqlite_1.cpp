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

int main()
{

	try
	{
		//Connection connection = Connection::Memory();
		Connection connection("C:\\temp\\count.db");
		//Execute(connection, "Create table Things (Content)");

		Statement insert(connection, "insert into Things (Content) values (?)");
		// begin transaction
		Execute(connection, "begin");

		for (int i = 0; i != 1000; i++)
		{
			insert.Reset(i);
			insert.Execute();
		}

		// End transaction
		Execute(connection, "commit");

		Statement count(connection, "select count(*) from Things");
		count.Step();
		printf("count: %d\n", count.GetInt());

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

		//Execute(connection, "create table Things ()");

		//Execute(connection, "insert into Things values (?)", "Joe");
		//Execute(connection, "insert into Things values (?)", 123);

		//for (Row row : Statement(connection, "select Another from Things"))
		//{
		//	printf("%s: %s\n", TypeName(row.GetType()), row.GetString());
		//}

		//Execute(connection, "create table Things ()");

		//Execute(connection, "insert into Things values (?)", "Joe");
		//Execute(connection, "insert into Things values (?)", 123);

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


