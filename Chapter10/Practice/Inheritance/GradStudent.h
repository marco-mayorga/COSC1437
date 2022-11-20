#ifndef STUDENT_H
#define STUDENT_H

#include "Student.h"

class GradStudent : protected Student // Inherited from Student
{
private:
    string degree;

public:
    GradStudent()
    {
        degree = "";
    }
    string getDegree()
    {
        return degree;
    };
    string setDegree(string de)
    {
        degree = de;
    };
};
#endif