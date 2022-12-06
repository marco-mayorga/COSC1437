#ifndef INHERITANCEANDPOLYMORPHISM_H
#define INHERITANCEANDPOLYMORPHISM_H
#include <iostream>
#include <cassert>
#include "inheritanceAndPolymorphism.h"

// Size refers tho the measurments of the sides not the number of sides.

class Shape
{
protected:
    int sides = 0;
    const double PI = 3.141592;

public:
    // Constructors
    Shape();              // no-arg constructor
    Shape(int sides);     // paramaterized contructor
    Shape(const Shape &); // copy constructor

    // Setters
    void setSides(int sides); // Sets the number of faces the object has
    // Getters
    int getSides(); // Gets the number of faces the object has

    // Abstract
    virtual double getArea() = 0;
};

class Circle : public Shape
{
public:
    // Constructors
    Circle();               // No-arg constructor
    Circle(double);         // Parameterized constructor
    Circle(const Circle &); // Copy constructor

    // Setters
    void setSides(double radius); //
    // Getters
    double getSides();

    // Specialty functions
    double getArea() override; // calculates area of circle
};

class Rectangle : public Shape
{
public:
    // Constructors
    Rectangle();                  // no-param contructor
    Rectangle(int);               // parameterized constructor
    Rectangle(const Rectangle &); // copy constructor

    // Setters
    void setSides(int sides); // Sets the number of faces the object has
    // Getters
    int getSides(); // Gets the number of faces the object has

    // Specialty Functions
    double getArea() override; // return area of rectangle
};

class Triangle : public Shape
{
public:
    // Constructors
    Triangle();                 // No-arg constructor
    Triangle(int);              // Parameterized constructor
    Triangle(const Triangle &); // Copy constructor

    // Setters
    void setSides(int sides); // Sets the number of faces the object has
    // Getters
    int getSides(); // Gets the number of faces the object has

    // Specialty functions
    double getArea() override; // calculates area of circle
};

class ThreeDimensional : public Shape
{
protected:
    int faces = 0;

public:
    // Constructors
    ThreeDimensional();    // No-arg constructor
    ThreeDimensional(int); // Parameterized constructor

    // Setters
    void setFaces(int faces); // Sets the number of faces the object has

    // Getters
    int getFaces(); // Gets the number of faces the object has

    // Abstract
    virtual double calcVolume() = 0;
    virtual double surfaceArea() = 0;
    double getArea() override;
};

class Cylinder : public ThreeDimensional
{
public:
    // Constructors
    Cylinder();    // No-arg constructor
    Cylinder(int); // parameterized constructor;

    // Setters
    void setFaces(int faces); // Sets the number of faces the object has

    // Getters
    int getFaces(); // Gets the number of faces the object has

    // Specialty Functions
    double surfaceArea() override; // calculates surface area
    double calcVolume() override;  // calculates volume
};

class Box : public ThreeDimensional
{

public:
    // Constructors
    Box();    // No-arg constructor
    Box(int); // parameterized constructor

    // Setters
    void setFaces(int faces); // Sets the number of faces the object has

    // Getters
    int getFaces(); // Gets the number of faces the object has

    // Specialty Functions
    double surfaceArea() override; // calculates surface area
    double calcVolume() override;  // calculates volumn
};

class TriPrism : public ThreeDimensional
{
public:
    // Constructors
    TriPrism();    // No-arg constructor
    TriPrism(int); // parameterized constructor

    // Setters
    void setFaces(int faces); // Sets the number of faces the object has

    // Getters
    int getFaces(); // Gets the number of faces the object has

    // Specialty Functions
    double surfaceArea() override; // calculates surface area
    double calcVolume() override;  // calculates volume
};

#endif