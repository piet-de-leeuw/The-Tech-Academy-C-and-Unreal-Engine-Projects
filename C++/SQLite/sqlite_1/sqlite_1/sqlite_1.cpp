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
		Connection connection = Connection::Memory();

		Execute(connection, "create table Things (Content text)");

		Execute(connection, "insert into Things values (?)", "Joe");
		Execute(connection, "insert into Things values (?)", 123);

		for (Row row : Statement(connection, "select Content from Things"))
		{
			printf("%s: %s\n", TypeName(row.GetType()), row.GetString());
		}

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


