#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class Course
{
private:
    string code;
    string name;
    string teacher;

public:
    void setCode(string c)
    {
        code=c;
    }
    void setName(string n)
    {
        name=n;
    }
    void setTeacher(string t)
    {
        teacher=t;
    }

    string getCode()
    {
        return code;
    }
    string getName()
    {
        return name;
    }
    string getTeacher()
    {
        return teacher;
    }
};


#endif // COURSE_H
