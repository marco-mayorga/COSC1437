/*Marco Mayorga

COSC-1436

November 08, 2022

*/

#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{	
    int num1 = 2, num2 = -3; //variables storing values
    cout << "Num1: " << num1 << num2 << endl;
    swap(&num1, &num2);      //calling the function swap and sending two adresses, one for num1 and one for num2
    cout << "NUm1: " << num1 << num2 << endl;
}
