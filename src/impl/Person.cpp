// #include "/home/medhavi/cpp app/src/headers/stdafx.h"
#include "/home/medhavi/cpp app/src/headers/Person.h"

Person::Person() {
    this->name = "MS";
}


Person::Person(string name) {
    this->name = name;
}

Person::~Person() {

}

Person& Person::getPerson() {
    return *this;
}

string Person::getName() {
    return this->name;
}

// int main() {
//     return 0;
// }

