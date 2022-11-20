
#include <iostream>

using namespace std;

class Student // base class
{
private:
    string name;
    string address;
    int age;

public:
    Student()
    {
        name = "";
        address = "";
        age = 0;
    };
    string getName()
    {
        return name;
    };
    string getAddress()
    {
        return address;
    };
    int getAge()
    {
        return age;
    };
    void setName(string name)
    {
        name = name;
    };
    void setAdress(string a)
    {
        address = a;
    };
    void setAge(int age)
    {
        age = age;
    };
};