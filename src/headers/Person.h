#include "stdafx.h"
#ifndef PERSON_H
#define PERSON_H
class Person {
    private:
        string name;

    public:
        Person();
        ~Person();
        Person(string name);
        string getName();
        Person& getPerson();
};

#endif


