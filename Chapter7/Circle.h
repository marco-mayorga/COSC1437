#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cassert>
#include "Circle.h"

class Circle
{
private:
    double radius = 0;
    const double PI = 3.141592;

public:

    // Constructors
    Circle(); //no-arg constructor 
    Circle(double); //parameterized constructor

    // Setters
    void setRadius(double rad); // Sets the radius given as the parameter into the database

    // Getters
    double getRadius() const;  // allows user to get radius
    double getArea();          // calculates area of circle
    double getCircumference(); // returnes circumference of circle
    double getDiameter();      // returns diameter of circle
};
#endif