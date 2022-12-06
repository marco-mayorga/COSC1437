/*Marco Mayorga

COSC-1436

November 25, 2022


Hide Folder Information
Instructions
You can Choose from either 1. Three Dimensional Figures or 2. Ships

1. Three Dimensional Figures

In keeping with the geometry theme that has been our object-oriented programming experience,
you will create an abstract class named Shape.  The class Shape should be defined as follows:

- sides (int) //A variable that holds the number of sides the face of the shape has.
You should also have 3 constructors:
- a no-arg constructor that initializes the number of sides to 0
- a parameterized constructor that receives an int parameter.  The method should call the setSides method
- copy constructor
You should also define the following methods:
- setSides(int) //setter method for the private member
- getSides() //getter method for the private member
- calcArea() (double) //An abstract method.

This Shape class is to be extended by the following classes:

- ThreeDimensional (an abstract class).
  This class should have a private instance member faces (int), that stores the number of faces of the three dimensional object.
  Create a no-arg as well as a parameterized constructor.  Also define getters and setters for the private member variable and
  define an abstract method calcVolume() that returns a double value.

- Rectangle (you may use the one you have already created in previous assignments, with modifications)
- Triangle
- Circle (you may use the one from previous assignment with modifications)

All these classes should define the method calcArea() based on its own respective geometry.

The following classes should extend the ThreeDimensional class:

- Cylinder
- Box
- TriPrism

Each of these should define surfaceArea() and calcVolume() for the respective geometry. You may chose to use aggregation to help define the Cylinder, Box, and TriPrism classes.
Define an ArrayList of shapes.
You are to create 10 Shape objects made up of Rectangle, Circle, Triangle, Cylinder, Box, TriPrism objects.
Use an enhanced for loop to display each of the Shape items.
*/

#include <iostream>
#include "inheritanceAndPolymorphism.h"
#include "shape.cpp"
#include <list>

using namespace std;

int main()
{
  // 2D Shapes object array
  list<Shape *> twoDShapes = {
      new Rectangle(5),
      new Circle(1),
      new Triangle(7),
      new Rectangle(8),
      new Circle(2),

  };
  // 3D Shapes object array
  list<ThreeDimensional *> threeDShapes = {

      new Cylinder(5),
      new Box(4),
      new TriPrism(5),
      new Cylinder(5),
      new Box(4),
  };

  // Loops through 2d shapes
  for (auto const &i : twoDShapes)
  {
    cout << " Number of sides is: " << i->getSides() << " ";
    cout << i << " Area is: " << i->getArea() << endl;
    cout << endl;
  }

  // Loops through 3d shapes
  for (auto const &i : threeDShapes)
  {
    cout << "The volume of " << i->calcVolume() << endl;
    cout << "The Surface Area of " << i->surfaceArea() << endl;
  }

  return 0;

  // Fix the get area function and ask user for parameterds
  // for loop to loop through all the shape objects
}