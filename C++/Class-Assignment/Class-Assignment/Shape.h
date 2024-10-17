#pragma once
#include <string>

class Shape
{
private:
	std::string color;
public:
	Shape(std::string);
	float GetArea();
	std::string GetColor() { return color; }
};

