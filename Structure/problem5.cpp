/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/

#include <iostream>

struct Employee {
    string name;
    int id;
    double salary;
};

int main() {
    Employee emp = {"John Doe", 101, 75000.0};
    cout << "Employee: " << emp.name << ", ID: " << emp.id << ", Salary: " << emp.salary << endl;
    return 0;
}
