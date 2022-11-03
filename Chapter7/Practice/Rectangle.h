#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <cassert>
#include "Rectangle.h"

class Rectangle
{
private:
    double length = 0; // Initializing length to be 0
    double width = 0;  // Initializing width to be 0
public:
    // Constructors
    Rectangle();
    Rectangle(double, double);
    Rectangle(double);
    Rectangle(const Rectangle&);

    // Destructors
    // Setters // Mutators
    void setLength(double len); // Sets the Length given in the parameter into the database
    void setWidth(double wid);  // Sets the Width given in the parameter into the database

    // getters  //accesors
    double getLength() const; // allows users to retrieve length
    double getWidth() const;  // allows users to retrieve width

    // Specialty Functions
    double calcArea(); // return area of rectangle
    double calcPerimeter();
};
#endif