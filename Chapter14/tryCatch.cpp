/*Marco Mayorga

COSC-1436

November 29, 2022

*/

#include <iostream>

using namespace std;

class SqrtException
{
}; // Creating Exception class

double mySqrt(int number)
{
    if (number < 0)
    {
        throw SqrtException(); // Throw an Exception if invalid
    }
    // Finds sqrt
    for (int r = 0; r * r <= number; r++)
    {
        if (r * r == number)
        {
            return r;
        }
    }
    // no square root, so itll throw an exception
    throw SqrtException();
}

int main()
{
    // Variables
    int number;

    // User Input
    cout << "Give me a number to find its square root: ";
    cin >> number;

    // Output
    try
    {
        cout << mySqrt(number) << " Is your square root" << endl;
    }
    catch (SqrtException)
    {
        cout << "That number has no sqrt." << endl;
    }
    return 0;
}