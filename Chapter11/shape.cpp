#include "inheritanceAndPolymorphism.h"
#include <cmath>

using namespace std;

// Shape
Shape::Shape() // a no-arg constructor that initializes the number of sides to 0
{
    sides = 0;
};
Shape::Shape(int sides) // Parameterized Constructor (Constructor with parameters can be overloaded)
{
    setSides(sides);
};
Shape::Shape(const Shape &shapeFromUser) // Copy constructor Gives area where it is stored in memory
{
    sides = shapeFromUser.sides;
}
// Setters
void Shape::setSides(int sides) // sets user input as sides
{
    sides = sides;
}
// Getters
int Shape::getSides() // Gets sides
{
    return sides;
}

// Circle
Circle::Circle() // Default constructor
{
    sides = 0;
}
Circle::Circle(double sides) // Parameterized Constructor (Constructor with parameters can be overloaded)
{
    Circle::setSides(sides);
};
Circle::Circle(const Circle &circleFromUser) // Copy constructor Gives area where it is stored in memory
{
    sides = circleFromUser.sides;
}
// Setters
void Circle::setSides(double sad) // sets user input as sides
{
    sides = sad;
}
// Getters
double Circle::getSides() // Gets sides
{
    return sides;
}
// Specialty Functions
double Circle::getArea() // calculates area of circle
{
    return PI * pow(sides, 2);
}

// Rectangle
Rectangle::Rectangle() // Default constructor
{
    sides = 0;
}
Rectangle::Rectangle(int sides) // Parameterized Constructor (Constructor with parameters can be overloaded)
{
    Rectangle::setSides(sides);
};
Rectangle::Rectangle(const Rectangle &rectangleFromUser) // Copy constructor Gives area where it is stored in memory
{
    sides = rectangleFromUser.sides;
}
// Setters
void Rectangle::setSides(int sid) // sets user input as sides
{
    sides = sid;
}
// Getters
int Rectangle::getSides() // Gets sides
{
    return sides;
}
// Specialty Functions
double Rectangle::getArea() // return area of rectangle
{
    double area = 2 * sides;
    return area;
}

// Triangle
Triangle::Triangle() // Default constructor
{
    sides = 0;
}
Triangle::Triangle(int sides)
{
    Triangle::setSides(sides);
}
Triangle::Triangle(const Triangle &triangleFromUser) // Copy constructor Gives area where it is stored in memory
{
    sides = triangleFromUser.sides;
}
// Setters
void Triangle::setSides(int sid) // sets user input as sides
{
    sides = sid;
}
// Getters
int Triangle::getSides() // Gets sides
{
    return sides;
}
// Specialty Functions
double Triangle::getArea() // return area of rectangle
{
    double area = pow(sides, 2) * (sqrt(3) / 4);
    return area;
}

// ThreeDimensional
ThreeDimensional::ThreeDimensional() // A no-arg constructor
{
    int faces = 0;
}
ThreeDimensional::ThreeDimensional(int faces) // Parameterized Constructor (Constructor with parameters can be overloaded)
{
    setFaces(faces);
}
// Setters
void ThreeDimensional::setFaces(int faces) // Sets faces
{
    faces = faces;
}
// Getters
int ThreeDimensional::getFaces() // Gets faces
{
    return faces;
}
double ThreeDimensional::getArea()
{
    return 0;
}

// BOX
Box::Box() // Default constructor
{
    faces = 0;
}
Box::Box(int faces) // parameterized constructor
{
    setFaces(faces);
}
// Setters
void Box::setFaces(int fac) // sets user input as faces
{
    faces = fac;
}
// Getters
int Box::getFaces() // Gets faces
{
    return faces;
}
// Specialty Functions
double Box::surfaceArea() // calculates surface area
{
    double surfaceArea = 2 * ((faces * faces) + (faces * faces) + (faces * faces));
    return surfaceArea;
}
double Box::calcVolume() // calculates volume
{

    double volume = faces * 3;
    return volume;
}

// TriPrism
TriPrism::TriPrism() // Default constructor
{
    faces = 0;
}
TriPrism::TriPrism(int faces) // parameterized constructor
{
    setFaces(faces);
}
// Setters
void TriPrism::setFaces(int fac) // sets user input as faces
{
    faces = fac;
}
// Getters
int TriPrism::getFaces() // Gets faces
{
    return faces;
}
// Specialty Functions
double TriPrism::surfaceArea() // calculates surface area
{
    double s = (faces + faces + faces) / 2;
    double aB = sqrt(s * (3 * (s - faces)));
    double surfaceArea = (2 * aB) + (faces + faces + faces) * faces;
    return surfaceArea;
}
double TriPrism::calcVolume() // calculates volume
{
    double volume = ((sqrt(3) * pow(sides, 2) * sides) / 4);
}

// Cylinder
Cylinder::Cylinder() // Default constructor
{
    faces = 0;
}
Cylinder::Cylinder(int faces) // parameterized constructor
{
    setFaces(faces);
}
// Setters
void Cylinder::setFaces(int fac) // sets user input as faces
{
    faces = fac;
}
// Getters
int Cylinder::getFaces() // Gets faces
{
    return faces;
}
// Specialty Functions
double Cylinder::surfaceArea() // calculates surface area
{
    double surfaceArea = (2 * PI * (faces * 2)) + (2 * PI * (pow(faces, 2)));
    return surfaceArea;
}
double Cylinder::calcVolume() // calculates volume
{
    double volume = (PI * faces * faces);
    return volume;
}