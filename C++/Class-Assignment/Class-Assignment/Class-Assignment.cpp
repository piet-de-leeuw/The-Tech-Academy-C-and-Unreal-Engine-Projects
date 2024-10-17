#include <iostream>
using std::cout;

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
    Rectangle rectangle(5, 3, "blue");
    Triangle triangle(6, 3.2, "green");
    Circle circle(2, "black");

    cout << "The area of rectangle = " << rectangle.GetArea() << '\n';
    cout << "The area of triangle = " << triangle.GetArea() << '\n';
    cout << "The area of rectangle = " << circle.GetArea() << '\n';
    
    cout << "The color of rectangle = " << rectangle.GetColor() << '\n';
    cout << "The color of triangle = " << triangle.GetColor() << '\n';
    cout << "The color of circe = " << circle.GetColor() << '\n';

}
