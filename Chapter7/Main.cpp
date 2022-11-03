/*Marco Mayorga

COSC-1436

October 30, 2022

*/

#include <iostream>
#include "Circle.h"
#include "Circle.cpp"

using namespace std;

int main()
{
    Circle circ;     // New object
    Circle circ1(1); // Starting with 50 as the radius

    double rad = 0; // Creating varibale rad to store radius given by user

    cout << endl; // formating

    // Asking for and storing radius
    cout << "Enter your radius: ";
    cin >> rad;

    // Sets radius to user input
    circ.setRadius(rad);

    // formatting
    cout << endl;

    // Couts Area, Circumference and Diameter

    // Circle that uses default constructor (no args)
    cout << "Circle that uses default constructor (no args): " << endl;
    cout << "Area: " << circ.getArea() << endl;
    cout << "Circumference: " << circ.getCircumference() << endl;
    cout << "Diameter: " << circ.getDiameter() << endl;

    cout << endl;

    // Circle that uses parameterized constructor (one arg)
    cout << "Circle that uses parameterized constructor (one arg): " << endl;
    cout << "Radius: " << circ1.getRadius() << endl;
    cout << "Area: " << circ1.getArea() << endl;
    cout << "Circumference: " << circ1.getCircumference() << endl;
    cout << "Diameter: " << circ1.getDiameter() << endl;
}