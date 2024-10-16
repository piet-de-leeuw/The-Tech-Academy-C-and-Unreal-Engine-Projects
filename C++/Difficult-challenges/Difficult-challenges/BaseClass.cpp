#include "BaseClass.h"

BaseClass::BaseClass(int baseValue, int base2Value) : base(baseValue), base2(base2Value) {}

void BaseClass::BaseFunction()
{
	std::cout << "this is a function in BaseClass \n";
}
