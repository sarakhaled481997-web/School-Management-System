#include <iostream>
#include "include/Person.h"
#include "include/Student.h"
#include "include/Teacher.h"
#include "include/Staff.h"
#include "include/Course.h"
#include "include/Classroom.h"
#include "include/Exam.h"


using namespace std;
int main()
{

    Student s;
    s.setName("Sara");
    s.setAge(20);
    s.setGender("Female");
    s.setAddress("Cairo");
    s.setPhone("010000000");
    s.setEmail("sara@mail.com");
    s.setId(1);
    s.setGradeLevel("Level 2");
    s.setGPA(3.8);

    cout<<"Student"<<endl;
    cout<<"the name is:"<<s.getName()<<endl;
    cout<<"the age is:"<<s.getAge()<<endl;
    cout<<"the gender is:"<<s.getGender()<<endl;
    cout<<"the grade level is:"<<s.getGradeLevel()<<endl;
    cout<<"the gpa is:"<<s.getGPA()<<endl;

    Teacher t;
    t.setName("Ahmed");
    t.setAge(40);
    t.setGender("Male");
    t.setAddress("Giza");
    t.setPhone("011111111");
    t.setEmail("ahmed@mail.com");
    t.setId(2);
    t.setSubject("Math");
    t.setSalary(8000);

    cout<<"Teacher "<<endl;
    cout<<"the name is:"<<t.getName()<<endl;
    cout<<"the subject is:"<<t.getSubject()<<endl;
    cout<<"the salary is:"<<t.getSalary()<<endl;

    Staff st;
    st.setName("Ali");
    st.setAge(35);
    st.setGender("Male");
    st.setAddress("Alex");
    st.setPhone("012222222");
    st.setEmail("ali@mail.com");
    st.setId(3);
    st.setRole("Administrator");
    st.setSalary(5000);

    cout<<"Staff"<<endl;
    cout<<"the name is:"<<st.getName()<<endl;
    cout<<"the role is:"<<st.getRole()<<endl;
    cout<<"the salary is:"<<st.getSalary()<<endl;


    Course c;
    c.setCode("CS101");
    c.setName("Programming");
    c.setTeacher("Ahmed");

    cout<<"Course"<<endl;
    cout<<"the code is:"<<c.getCode()<<endl;
    cout<<"the name is:"<<c.getName()<<endl;
    cout<<"the teacher name is:"<<c.getTeacher()<<endl;

    Classroom cr;
    cr.setRoom(12);
    cr.setCapacity(30);

    cout<<"Classroom"<<endl;
    cout<<"the room number is:"<<cr.getRoom()<<endl;
    cout<<"the capacity is:"<<cr.getCapacity()<<endl;


    Exam e;
    e.setName("Midterm");
    e.setCourse("CS101");
    e.setDate("10-3-2026");

    cout<<"Exam"<<endl;
    cout<<"the name is:"<<e.getName()<<endl;
    cout<<"the course is:"<<e.getCourse()<<endl;
    cout<<"the date is:"<<e.getDate()<<endl;

    return 0;
}

