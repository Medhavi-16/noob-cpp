// #include "/home/medhavi/cpp app/src/headers/stdafx.h"
#include "/home/medhavi/cpp app/src/headers/Student.h"

Student::Student(string name, char grade, string rollNo, int semester) :Person(name) {
    this->grade = grade;
    this->rollNo = rollNo;
    this->semester = semester;
}


Student Student::getStudent() {
    return *this;
}

string Student::toString() {
    string student = this->getName() + " " + this->rollNo  + " " + this->grade; " " + this->semester;
    return student;
}

char Student::getGrade() {
    return grade;
}

string Student::getRollNo() const{
    return this->rollNo;
}

// int main() {
//     return 0;
// }