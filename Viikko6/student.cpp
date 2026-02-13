#include "student.h"
#include <iostream>

Student::Student(string s, int n)
{
    Name = s;
    Age = n;
}

void Student::setAge(int number)
{
    Age = number;
}

void Student::setName(string s)
{
    Name = s;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Student = " << Name << " Age = " << Age << endl;
}
