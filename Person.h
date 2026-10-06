#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;
    int id;

public:
    void setName(string n)
    {
        name=n;
    }
    void setAge(int a)
    {
        age=a;
    }
    void setGender(string g)
    {
        gender=g;
    }
    void setAddress(string a)
    {
        address=a;
    }
    void setPhone(string p)
    {
        phoneNumber=p;
    }
    void setEmail(string e)
    {
        email=e;
    }
    void setId(int i)
    {
        id=i;
    }

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getPhone()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;
    }
    int getId()
    {
        return id;
    }
};

#endif // PERSON_H
