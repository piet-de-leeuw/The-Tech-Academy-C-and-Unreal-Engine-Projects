#include "Triangle.h"

Triangle::Triangle(float base, float height, std::string color) : base(base), height(height), Shape(color) {}

float Triangle::GetArea()
{
	return (base * height) / 2;
}