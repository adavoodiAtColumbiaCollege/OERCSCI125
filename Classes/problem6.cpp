/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    int id;
public:
    Employee(string n, int i) : name(n), id(i) {}
    void show() { cout << "Employee: " << name << ", ID: " << id << endl; }
};

int main() {
    Employee emp("John Doe", 101);
    emp.show();
    return 0;
}
