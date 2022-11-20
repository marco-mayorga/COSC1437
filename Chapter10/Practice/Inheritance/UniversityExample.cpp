/*Marco Mayorga

COSC-1436

November 15, 2022

Inheritance Tutorial
*/

#include <iostream>
#include "Student.h"
#include "UnderGrad.h"
#include "GradStudent.h"

using namespace std;

int main()
{
    // 1. Variables
    Student s1; // object of type undergrad
    cout << s1.getName();

    UnderGrad u1; // object of type grad
    u1.setAdress("123 ABC Street");
    cout << u1.getAddress();

    GradStudent g1;
    g1.setDegree("Associate of Arts");
    cout << g1.getDegree() << endl;
}