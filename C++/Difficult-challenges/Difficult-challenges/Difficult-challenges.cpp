#include <iostream>
using std::cout;
#include "ExampleClass.h"

/*
	Complete these actions:
    - Call a function without an argument.
    - Declare a function with multiple parameters. 
    - Utilize the return keyword inside a function.
    - Pass a reference to a function.
    - Use function overloading (name multiple functions with different parameters).  
*/
void Add()
{
	cout << "45 +540 = " << (45 + 540) << '\n';
}

void Add(int x, int y)
{
	cout << (x + y) << '\n';
}

void Divide(int x, int y)
{
	if (x == 0 || y == 0) { return; }
	cout << (x / y) << '\n';
}

void sortNumbers(int& x, int& y)
{
	if (x > y)
	{
		int z = x;
		x = y;
		y = z;
	}
}

int main()
{
	// Utilize the & operator to get the memory address of a variable.
	int value = 344028;
	cout << value << '\n';
	cout << &value << '\n';

	// Utilize the * operator to create a pointer variable. 
	int* ptrValue = &value;
	cout << ptrValue << '\n';

	// Utilize the dereference operator.
	cout << *ptrValue << '\n';
	

	Add();
	Add(402213445, 5502242);
	Divide(40, 5);

	int first = 405;
	int second = 23;
	cout << first << "  " << second << '\n';
	sortNumbers(first, second);
	cout << first << "  " << second << '\n';

	// Define a function that belongs to a class inside the class definition.
	// Define a function that belongs to a class outside the class definition.
	// See ExampleClass.h and ExampleClass.cpp for Declaration and Definition.
	ExampleClass example(12, 14, 25, 50);
	example.ExampleMemberFunction();
	ExampleFreeFunction();

	//Create a constructor with parameters. 
	//Define a constructor outside a class. (see ExampleClass .h and .cpp files)

	/*
	Complete these actions:
    - Utilize the : symbol to inherit from a class.
	(see ExampleClass.h)
    - Utilize multilevel inheritance.
	(See ExampleClass.h and OtherExampleClass.h)
    - Derive a class from more than one base class (using a comma-separated list).
	(see ExampleClass)
    - Access the protected specifier in an inherited class.
	(see ExampleClass.cpp -> ExampleMemberFunction().
	*/

	ExampleClass exampleClass(10,20,100,200);
	exampleClass.BaseFunction();
	exampleClass.ExampleMemberFunction();
	exampleClass.OtherBaseFunction2();

	// Write code in C++ that utilizes polymorphism.
	//(see OtherExampleClass.cpp for the function that overrides the same function in OtherBaseClass)
	OtherExampleClass otherExampleClass;
	otherExampleClass.OtherBaseFunction();
	// OtherBaseFunction from OtherBaseclass is now hidden for exampleClass
	exampleClass.OtherBaseFunction();

	// Utilize these keywords: try, throw and catch.
	try
	{
		int speed = 100;

		if (speed <= 50)
		{
			cout << "Your speed is good \n";
		}
		else
		{
			throw(speed);
		}
	}
	catch(int speed)
	{
		cout << "You are to fast! Your speed is: " << speed << '\n';
	}
	
}
