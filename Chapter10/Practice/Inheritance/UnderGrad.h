#ifndef STUDENT_H
#define STUDENT_H

#include "Student.h"

class UnderGrad : public Student // Inherited from Student
{
private:
    double gpa;

public:
    UnderGrad()
    {
        gpa = 0.0;
    };
    double getGPA()
    {
        return gpa;
    };
    void setGPA(double g)
    {
        gpa = g;
    }
};
#endif