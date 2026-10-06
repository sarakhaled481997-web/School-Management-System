#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher:public Person
{
private:
    string subject;
    float salary;

public:
    void setSubject(string s)
    {
        subject=s;
    }
    void setSalary(float s)
    {
        salary=s;
    }

    string getSubject()
    {
        return subject;
    }
    float getSalary()
    {
        return salary;
    }
};

#endif // TEACHER_H
