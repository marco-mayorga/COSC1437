#include "Rectangle.h" //Pointing to file with the definition
using namespace std;
/*
Implimentation File
 */

Rectangle::Rectangle() // Default constructor
{
    length = 0;
    width = 0;
    cout << "I am in the default param" << endl;
}
Rectangle::Rectangle(double len, double wid) // Parameterized Constructor (Constructor with parameters can be overloaded)
{
    length = len;
    width = wid;
    cout << "I am in the param constructor" << endl;
}

Rectangle::Rectangle(double len) // Parameterized Constructor (Constructor with parameters can be overloaded)
{
    length = len;
    width = 0;
    cout << "I am in the one param constructor" << endl;
}

Rectangle::Rectangle(const Rectangle &rectangleFromUser) // Copy constructor Gives area where it is stored in memory
{
    length = rectangleFromUser.length;
    width = rectangleFromUser.width;
}

// Setters // Mutators
void Rectangle::setLength(double len) // Sets the Length given in the parameter into the database
{
    length = len;
}
void Rectangle::setWidth(double wid) // Sets the Width given in the parameter into the database
{
    width = wid;
}

// getters  //accesors
double Rectangle::getLength() const // allows users to retrieve length
{
    return length;
}
double Rectangle::getWidth() const // allows users to retrieve width
{
    return width;
}

// Specialty Functions
double Rectangle::calcArea() // return area of rectangle
{
    return length * width;
}
double Rectangle::calcPerimeter()
{
    return (2 * length) + (2 * width);
}
