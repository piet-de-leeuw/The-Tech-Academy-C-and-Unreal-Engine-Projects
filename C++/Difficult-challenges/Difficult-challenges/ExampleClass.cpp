#include "ExampleClass.h"
#include <iostream>
using std::cout;

ExampleClass::ExampleClass(int e, int e1, int baseValue, int base2Value) : exampleInt(e), exampleInt1(e1), BaseClass(baseValue, base2Value) {}

void ExampleClass::ExampleMemberFunction()
{
	cout << "ExampleMemberfunction is called \n";
	cout << exampleInt << " " << exampleInt1 << '\n';
	cout << base << '\n';
}

void ExampleFreeFunction()
{
	cout << "ExampleFreeFunction is being called. \n";
}