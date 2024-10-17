#include "Circle.h"

Circle::Circle(float radius, std::string color) : radius(radius), Shape(color) {}

float Circle::GetArea()
{
	return (radius * radius) * 3.14;
}