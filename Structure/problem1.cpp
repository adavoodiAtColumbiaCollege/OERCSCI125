/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
struct Student {
    string name;
    int age;
};

int main() {
    Student student = {"Alice", 20};
    cout << student.name << " is " << student.age << " years old." << endl;
    return 0;
}
