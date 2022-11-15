/*Marco Mayorga

COSC-1436

November 08, 2022

Reverse Array
Write a function that accepts an int array and the array’s size as arguments. The
function should create a copy of the array, except that the element values should
be reversed in the copy. The function should return a pointer to the new array.
Demonstrate the function in a complete program.
*/

#include <iostream>

using namespace std;

int *reverseArray(int *, int);
void display(int *, int);

int main()
{
    const int SIZE1 = 6;
    const int SIZE2 = 5;

    int even[SIZE1] = {2, 5, 5, 7, 9, 10};
    int odd[SIZE2] = {1, 5, 7, 8, 9};

    display(even, SIZE1);
    cout << endl;
    int *evenReverseCopy = reverseArray(even, SIZE1);
    display(evenReverseCopy, SIZE1);
}

int *reverseArray(int *arr, int size)
{
    int sourceIndex;
    int targetIndex;

    if (size <= 0)
    {
        return NULL;
    }

    int *copyArr = new int[size];

    for (sourceIndex = size - 1, targetIndex = 0; sourceIndex >= 0; sourceIndex--, targetIndex++)
    {
        copyArr[targetIndex] = arr[sourceIndex]; // last elemernt will now be the targets first element
    }

    return copyArr; // return the address of the copy array wityh reverse numbers
}

void display(int *ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
}