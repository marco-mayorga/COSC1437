/*Marco Mayorga

COSC-1436

November 11, 2022

Write a program that can be used to gather statistical data about the number of movies college students see in a month.
The program should ask the user how many students were surveyed and dynamically allocate an array of that size.
The program should then allow the user to enter the number of movies each student has seen.
The program should then calculate the average of the values entered.
*/

#include <iostream>

using namespace std;

// Prototypes
double average(int *StudentArray, int studentsSurveyed);

int main()
{
    // Variables
    int *arrayStudents;               // Initializes array
    int studentsSurveyed;             // Variable for the amount of students surveyed
    double averageAmountOfMovies = 0; // The average amount of all the movies watched by all the students surveyed

    // UserInput
    // Asks user for amount of students and saves it to studentsSurveyed.
    cout << "How many students were surveyed: ";
    cin >> studentsSurveyed;

    // The "new" keyword assigns a new value to the amount that fits in the Student array.
    arrayStudents = new int[studentsSurveyed];

    // UserInput
    // Loops through array so user can set the amount of movies each student watched.
    for (int i = 0; i < studentsSurveyed; i++)
    {
        cout << "How many movies did student " << i + 1 << " watch: ";
        cin >> arrayStudents[i];
    }

    // Feeds the array into the average function and sets it to the averageAmountOfMovies variable.
    averageAmountOfMovies = average(arrayStudents, studentsSurveyed);

    // Deletes array from heap
    delete[] arrayStudents;

    // For spacing
    cout << endl;

    cout << "The average amount of movies a college student watches in a month is " << averageAmountOfMovies << endl;
}

// Calculates the average amount of movies a student watches
double average(int *studentArray, int studentsSurveyed)
{
    // Varibale to store the average
    double average = 0;

    // Adds all the items in Studentarray together and sets to average variable.
    for (int i = 0; i < studentsSurveyed; i++)
    {
        average += studentArray[i];
    }
    // Divides the added items by the amount of items in the array to get the average.
    average = average / studentsSurveyed;
    return average;
}
