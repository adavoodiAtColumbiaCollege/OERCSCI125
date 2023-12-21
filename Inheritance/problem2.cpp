/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Constructor Inheritance
// In this example, we have a base class Person and a derived class Student.
// The Student class inherits from the Person class and extends it by adding a studentID attribute.
// Both classes have constructors, and the Student constructor initializes the name attribute using the base class constructor.
// In the main function, we create an instance of Student and call methods from both the base and derived classes.

#include <iostream>

// Base class
class Person {
protected:
    std::string name;

public:
    Person(const std::string& n) : name(n) {
    }

    void introduce() {
        std::cout << "My name is " << name << std::endl;
    }
};

// Derived class
class Student : public Person {
private:
    int studentID;

public:
    Student(const std::string& n, int id) : Person(n), studentID(id) {
    }

    void showStudentInfo() {
        std::cout << "Student ID: " << studentID << std::endl;
    }
};

int main() {
    // Create an instance of Student
    Student student("Alice", 12345);

    // Call methods from both base and derived classes
    student.introduce();
    student.showStudentInfo();

    return 0;
}
