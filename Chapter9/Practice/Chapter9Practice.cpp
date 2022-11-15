/*Marco Mayorga

COSC-1436

November 03, 2022

*/

#include <iostream>

using namespace std;

class Name
{
};

int main()
{
    // int score = 92;
    // int &rScore = score;

    bool flag = true;
    int score = 92;
    double average = 82.56;

    bool *pFlag = nullptr;
    int *pScore = &score;
    double *pAverage = &average;

    pFlag = &flag;

    cout << "pFlag: " << *pFlag << endl;
    cout << "pScore: " << *pScore << endl;
    cout << "pAverage: " << *pAverage << endl;
}