/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


#include <iostream>
#include <vector>
#include <string>

// Problem: Demonstrating the usage of a vector of objects.

class Student {
public:
    std::string name;
    int age;

    Student(const std::string& n, int a) : name(n), age(a) {}
};

int main() {
    // Create a vector of Student objects
    std::vector<Student> studentVector;

    // Add Student objects to the vector
    studentVector.push_back(Student("Alice", 20));
    studentVector.push_back(Student("Bob", 22));
    studentVector.push_back(Student("Charlie", 19));

    // Display the contents of the vector
    std::cout << "Student Vector Contents: " << std::endl;
    for (const Student& student : studentVector) {
        std::cout << "Name: " << student.name << ", Age: " << student.age << std::endl;
    }

    // Testing Scenario:
    // 1. Create a vector to store Student objects.
    // 2. Add Student objects with names and ages to the vector.
    // 3. Display the contents of the vector.

    return 0;
}
