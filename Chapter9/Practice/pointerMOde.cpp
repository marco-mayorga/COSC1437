/*Marco Mayorga

COSC-1436

November 03, 2022

Mode Function
In statistics, the mode of a set of values is the value that occurs most often or
with the greatest frequency. Write a function that accepts as arguments the
following:

A. An array of integers

B. An integer that indicates the number of elements in the array
The function should determine the mode of the array. That is, it should determine
which value in the array occurs most often. The mode is the value the function
should return. If the array has no mode (none of the values occur more than once),
the function should return −1. (Assume the array will always contains nonnegative values.)
Demonstrate your pointer prowess by using pointer notation instead of array notation in this function.
*/

#include <iostream>
using namespace std;

// prototypes
int getMode(int *, int);
int *makeArray(int);
int main()
{
    // 0. CONST
    const int SIZE = 11;
    // 1. Variable
    int test[SIZE] = {5, 6, 7, 8, 8, 7, 7, 6, 9, 4, 3};
    int mode;

    mode = getMode(test, SIZE);

    // Display the mode, if any.
    if (mode == -1)
        cout << "The test set has no mode.\n";
    else
        cout << "\nThe mode of the test set is: " << mode << endl;
    return 0;
}

int getMode(int *arr, int SIZE)
{
    // A pointer to reference dynamically alocated memory
    int *frequency = nullptr;
    int mode = -1;
    int highestFrequency = 0;
    int element = 0; // to hold element subscript;
    int counter = 0; // loop counter

    frequency = makeArray(SIZE); // a function that holds count of frequency

    // store 0s in all the elements frequencies.
    for (int count = 0; count < SIZE; count++)
    {
        frequency[count] = 0;

        // Find the frequency of each element in the array
        for (int count = 0; count < SIZE; count++)
        {
            for (int count2 = 0; count2 < SIZE; count2++)
            {
                if (*(arr + count2) == *(arr + count))
                {
                    (*(frequency + count))++;
                }
            }
        }

        highestFrequency = *frequency;
        element = 0;
        for (int count = 1; count < SIZE; count++)
        {
            if (*(frequency + count) > highestFrequency)
            {
                highestFrequency = *(frequency + count);
                element = count;
            }
        }

        frequency = nullptr;

        if (highestFrequency > 1)
        {
            mode = *(arr + element);
        };
        return mode;
    }
}

int *makeArray(int SIZE)
{
    int *ptr = new int[SIZE]; // creating new array of size 11 and storeing adress to ptr
    return ptr;               // returning the pointer
}
