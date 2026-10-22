#ifndef STAFF_H
#define STAFF_H

#include "Person.h"

class Staff:public Person
{
private:
    string role;
    float salary;

public:
    Staff()
    {
        salary=0;
    }
    ~Staff(){}
    void setRole(string r)
    {
        role=r;
    }
    void setSalary(float s)
    {
        salary=s;
    }

    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
};


#endif // STAFF_H
};


#endif // STAFF_H
