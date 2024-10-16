#include "Dog.h"
#include <iostream>
using std::cout;

using std::string;

Dog::Dog(string breed, string color, string height, string weigth) : breed(breed), color(color), height(height), weight(weight) {}

void Dog::Shake()
{
	cout << "Dog is schaking. \n";
}
void Dog::Sit()
{
	cout << "Dog is sitting. \n";
}
void Dog::LayDown()
{
	cout << "Dog is laying down. \n";
}
