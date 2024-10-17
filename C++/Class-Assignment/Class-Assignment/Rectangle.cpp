#include "Rectangle.h"

Rectangle::Rectangle(float height, float width, std::string color) : height(height), width(width), Shape(color) {}

float Rectangle::GetArea()
{
	return height * width;
}