/*Marco Mayorga

COSC-1436

October 30, 2022

*/

#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"

using namespace std;

int main()
{
    Rectangle rec;          // Creating an instance of class Rectangle and naming the object rec
    Rectangle rec2(10, 30); // starting with len 10 amd width 30
    Rectangle rec3(50);     // Starting with 50 as the length
    Rectangle rec4(rec2);   // starting with everything to know about rec2

    double len = 0; // Creating varibale len to store length given by user
    double wid = 0; // Creating varibale wid to store width goven by user

    // Ask for and store length
    cout << "Enter your length: ";
    cin >> len;

    // Ask for and store width
    cout << "Enter your width: ";
    cin >> wid;

    rec.setLength(len);
    rec.setWidth(wid);

    cout << endl;
    cout << "Length: " << rec.getLength() << endl;
    cout << "Width: " << rec.getWidth() << endl;
    cout << "Area: " << rec.calcArea() << endl;
    cout << "Perimeter: " << rec.calcPerimeter() << endl;

    cout << endl;
    cout << "Length: " << rec2.getLength() << endl;
    cout << "Width: " << rec2.getWidth() << endl;
    cout << "Area: " << rec2.calcArea() << endl;
    cout << "Perimeter: " << rec2.calcPerimeter() << endl;

    cout << endl;
    cout << "Length: " << rec3.getLength() << endl;
    cout << "Width: " << rec3.getWidth() << endl;
    cout << "Area: " << rec3.calcArea() << endl;
    cout << "Perimeter: " << rec3.calcPerimeter() << endl;

    cout << endl;
    cout << "Length: " << rec4.getLength() << endl;
    cout << "Width: " << rec4.getWidth() << endl;
    cout << "Area: " << rec4.calcArea() << endl;
    cout << "Perimeter: " << rec4.calcPerimeter() << endl;
}