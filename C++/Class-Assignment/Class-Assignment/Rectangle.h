#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:
	float height;
	float width;

public:
	Rectangle(float heigth, float width, std::string color);
	float GetArea();
};

