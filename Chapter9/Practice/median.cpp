/*Marco Mayorga

COSC-1436

November 08, 2022

In statistics, when a set of values is sorted in ascending or descending order,
its median is the middle value. If the set contains an even number of values, the
median is the mean, or average, of the two middle values. Write a function that
accepts as arguments the following:
A. An array of integers
B. An integer that indicates the number of elements in the array
The function should determine the median of the array. This value should be
returned as a double. (Assume the values in the array are already sorted.)
Demonstrate your pointer prowess by using pointer notation instead of array
notation in this function.
*/

#include <iostream>

using namespace std;

void display(int *, int);
double median(int *, int);

int main()
{
    const int SIZE1 = 6;
    const int SIZE2 = 5;

    int even[SIZE1] = {2, 5, 5, 7, 9, 10};
    int odd[SIZE2] = {1, 5, 7, 8, 9};

    display(even, SIZE1);
    cout << "Median Even: " << median(even, SIZE2) << endl;

    display(odd, SIZE2);
    cout << "Median Odd: " << median(odd, SIZE2) << endl;

    display(even, SIZE1);
    cout << "Mode Even: " << median(even, SIZE2) << endl;

    display(odd, SIZE2);
    cout << "Mode Odd: " << median(odd, SIZE2) << endl;
}

double median(int *arr, int size)
{
    double med = -999;

    if (size % 2 == 0)
    {
        int middle1 = size / 2;       // right middle
        int middle2 = (size / 2) - 1; // levft middle
        med = ((*(arr + (size / 2)) + *(arr + (size / 2) - 1)) / 2.0);
        return med;
    }
    else
    {
        med = *(arr + (size / 2));
    }

    return med;
}
double mode(int *arr, int size){

};
double mean(int *arr, int size){
    
};

void display(int *ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " " << endl;
    }
}