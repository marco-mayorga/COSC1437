#include "Circle.h"
#include <cmath>

Circle::Circle() // Default constructor
{
    radius = 0;
}
Circle::Circle(double rad) // Parameterized Constructor (Constructor with parameters can be overloaded)
{
    radius = rad;
}


void Circle::setRadius(double rad) //sets user input as radius
{
    radius = rad;
}

// Getters
double Circle::getRadius() const // allows user to get radius
{
    return radius;
}
double Circle::getArea() // calculates area of circle
{
    return PI * pow(radius, 2);
}
double Circle::getCircumference() // returnes circumference of circle
{
    return 2 * radius * PI;
}
double Circle::getDiameter() // returns diameter of circle
{
    return 2 * radius;
}