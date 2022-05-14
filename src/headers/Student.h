#include "stdafx.h"
#include "Person.h"


class Student:public Person {
    private:
    char grade;
    string rollNo;
    int semester;

    public:
    Student(string name, char grade, string rollNo, int semester);
    void setName(string name);
    void setGrade(char grade);
    char getGrade();
    string getRollNo() const;
    Student getStudent();
    string toString();
};