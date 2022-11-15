/*Marco Mayorga

COSC-1436

November 11, 2022


Write a function that accepts an int array of grades and the array’s size as arguments.
The function should create a new array that is twice the size of the argument array.
The function should copy the contents of the argument array to the new array and initialize the unused elements of the second array with 0.
The function should return a pointer to the new array.
Create a main to demonstrate your function similar or exactly the same as the following.

Sample Output:          Sample Input:

How many grades will be input: 5
Enter Grades: 99 78 45 85 87
Grades: 99 78 45 85 87
Your gradebook has been expanded for more scores:  99 78 45 85 87 0 0 0 0 0
*/

#include <iostream>

using namespace std;

// Prototypes
double *arrayExpander(double *, int);

int main()
{
    double *gradesArray;
    int amountOfGrades;
    double *newGradesArray;

    // Asks for the amount of grades that will be put in and sets it to amountOfGrades.
    cout << "How many grades will be input: ";
    cin >> amountOfGrades;

    // Resize array to the amount of Grades that will be put in.
    gradesArray = new double[amountOfGrades];

    // Asks for grades for each spot in the array
    for (int i = 0; i < amountOfGrades; i++)
    {
        cout << "Enter Grade " << i + 1 << ": ";
        cin >> gradesArray[i];
    }

    // Formatting
    cout << endl;

    // Displays original grades before the expansion.
    cout << "Grades: ";
    for (int i = 0; i < amountOfGrades; i++)
    {
        cout << gradesArray[i] << " ";
    }

    // Formatting
    cout << endl;

    // Sets the pointer that the function returns equal to the expandedGradesArray variable
    newGradesArray = arrayExpander(gradesArray, amountOfGrades);

    // deletes original array to free memory
    delete[] gradesArray;

    // Formatting
    cout << endl;

    // Ouputs final array.
    cout << "Your gradebook has been expanded for more scores: ";
    for (int i = 0; i < *newGradesArray * 2; i++)
    {
        cout << newGradesArray[i] << " ";
    }

    // deletes the new array since we are done with it.
    delete[] newGradesArray;
}

// Expands array to twice its size
double *arrayExpander(double *gradesArray, int amountOfGrades)
{
    // Doubles the amount of grades variable value
    int doubledAmountOfGrades = amountOfGrades * 2;

    // Makes a new Grades array
    double *expandedGradesArray = new double[doubledAmountOfGrades];

    // Since the new function was partially initialized all values are already 0.
    // The for loop copies the grades from original array into new array and everything else is at 0.
    for (int i = 0; i < amountOfGrades; i++)
    {
        expandedGradesArray[i] = gradesArray[i];
    }

    // The name itself returns its place in memory since it was initialized with the astrisk.
    return expandedGradesArray;
}