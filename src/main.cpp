// #include "/home/medhavi/cpp app/src/headers/stdafx.h"
#include "/home/medhavi/cpp app/src/headers/Student.h"
#include <vector>
#include <algorithm>
#include <bits/stdc++.h> //stl

bool comparator(Student* s1, Student* s2) {
    return s1->getGrade() > s2->getGrade();
}

/**
 * group the students according to their batches
 * @param students
 * @return map with batch as key and vector of students in that batch as value
 */
unordered_map<string, vector<Student*>> groupByBatch(vector<Student*> *students) {
    unordered_map<string, vector<Student*>> groupedByBatch;

    for_each(students->begin(), students->end(), [&groupedByBatch](Student* const& a) {
        string key = a->getRollNo().substr(0, 7);
        if(groupedByBatch.find(key) == groupedByBatch.end()) {
            groupedByBatch[key] = vector<Student*>{a};
        }
        else {
            groupedByBatch[key].push_back(a);
        }
    });

    return groupedByBatch;
}

/**
 * sort the students in each batch according to their grades and print the sort list of each batch
 * @param groupedByBatch
 */
void printSortByGrade(unordered_map<string, vector<Student*>> groupedByBatch) {
    for_each(groupedByBatch.begin(), groupedByBatch.end(), [](pair<string , vector<Student*>> grouped) {
        vector<Student*> *students = &grouped.second;
        cout << "For batch " << grouped.first << endl;
        sort(students->begin(), students->end(), [](Student* const& a, Student* const& b){
            return a->getGrade() < b->getGrade();
        });
        for(Student* a: grouped.second) {
            cout << a->toString() << endl;
        }
        cout << endl;
    });
}

int main() {

    vector<Student*> students;

    do{
    cout << "Enter student ?" << endl;
    string input;
    cin >> input;
    if(input.at(0) == 'Y' || input.at(0) == 'y') {
        cout << "Input name, roll no, grade, semester" << endl;
        string name, rollNo;
        char grade;
        int sem;
        cin.ignore();
        getline(cin, name);
        cin.ignore();
        getline(cin, rollNo);
        cin.ignore();
        cin >> grade;
        cin >> sem;
        auto* student = new Student(name, grade, rollNo, sem);
        //students.push_back(Student(name, grade, rollNo, sem));
        students.push_back(student);
    }
    else break;
    }
    while(true);

    printSortByGrade(groupByBatch(&students));

}