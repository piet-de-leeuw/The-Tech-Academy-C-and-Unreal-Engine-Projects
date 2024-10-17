#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
	float base;
	float height;

public:
	Triangle(float, float, std::string);
	float GetArea();
};

