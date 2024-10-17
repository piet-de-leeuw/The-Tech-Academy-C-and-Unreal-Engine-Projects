#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	float radius;

public:
	Circle(float radius, std::string color);
	float GetArea();
};

