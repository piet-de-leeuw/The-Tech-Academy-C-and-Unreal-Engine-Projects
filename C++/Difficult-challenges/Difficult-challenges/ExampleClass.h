#pragma once
#include "BaseClass.h"
#include "OtherExampleClass.h"

class ExampleClass : public BaseClass, public OtherExampleClass
{
// Utilize the private keyword.
private:
	int exampleInt;
// Utilize the protected keyword.
protected:
	int exampleInt1;
public:
	ExampleClass(int e, int e1, int baseValue, int base2Value);
	void ExampleMemberFunction();

};

void ExampleFreeFunction();

