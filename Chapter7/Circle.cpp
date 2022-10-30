/*Marco Mayorga

COSC-1436

October 30, 2022

*/

#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
private:
    double radius = 0;
    double PI = atan(1) * 4;

public:
    // Setters
    void setRadius(double rad) // Sets the radius given as the parameter into the database
    {
        radius = rad;
    }

    // Getters
    double getRadius() const // allows user to get radius
    {
        return radius;
    }
    double getArea(double) // calculates area of circle
    {
        return PI * pow(radius, 2);
    }
    double getCircumference(double) // returnes circumference of circle
    {
        return 2 * radius * PI;
    }
    double getDiameter(double) // returns diameter of circle
    {
        return 2 * radius;
    }
};

int main()
{
    Circle circ;    // New object
    double rad = 0; // Creating varibale rad to store radius given by usere
    cout << endl;   // formating
    // Asking for and storing radius
    cout << "Enter your radius: ";
    cin >> rad;

    // Sets radius to user input
    circ.setRadius(rad);

    // Couts Area, Circumference and Diameter
    cout << "Area: " << circ.getArea(rad) << endl;
    cout << "Circumference: " << circ.getCircumference(rad) << endl;
    cout << "Diameter: " << circ.getDiameter(rad) << endl;
}