/*Marco Mayorga

COSC-1436

October 30, 2022

*/

#include <iostream>

using namespace std;

class Rectangle
{
private:
    double length = 0; // Initializing length to be 0
    double width = 0;  // Initializing width to be 0
public:
    // Setters // Mutators
    void setLength(double len) // Sets the Length given in the parameter into the database
    {
        length = len;
    }
    void setWidth(double wid) // Sets the Width given in the parameter into the database
    {
        width = wid;
    }

    // getters  //accesors
    double getLength() const // allows users to retrieve length
    {

        return length;
    }
    double getWidth() const // allows users to retrieve width
    {
        return width;
    }

    // Specialty Functions
    double calcArea() // return area of rectangle
    {
        return length * width;
    }
    double calcPerimeter()
    {
        return (2 * length) + (2 * width);
    }
};

int main()
{
    Rectangle rec; // Creating an instance of class Rectangle and naming the object rec
    rec.setLength(100);
    cout << rec.getLength() << endl;
}