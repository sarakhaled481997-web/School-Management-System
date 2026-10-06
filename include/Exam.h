#ifndef EXAM_H
#define EXAM_H

#include <iostream>
using namespace std;

class Exam
{
private:
    string name;
    string course;
    string date;

public:
    void setName(string n)
    {
        name=n;
    }
    void setCourse(string c)
    {
        course=c;
    }
    void setDate(string d)
    {
        date=d;
    }

    string getName()
    {
        return name;
    }
    string getCourse()
    {
        return course;
    }
    string getDate()
    {
        return date;
    }
};

#endif // EXAM_H
