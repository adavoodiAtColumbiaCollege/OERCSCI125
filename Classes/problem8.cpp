/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>

#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;
public:
    Student(string n, int r) : name(n), rollNo(r) {}
    void display() { cout << "Student: " << name << ", Roll No: " << rollNo << endl; }
};

int main() {
    Student stud("Jane", 102);
    stud.display();
    return 0;
}
