#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student:public Person
{
private:
    string gradeLevel;
    float GPA;

public:
    void setGradeLevel(string g)
    {
        gradeLevel=g;
    }
    void setGPA(float g)
    {
        GPA=g;
    }

    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGPA()
    {
        return GPA;
    }
};

#endif // STUDENT_H
