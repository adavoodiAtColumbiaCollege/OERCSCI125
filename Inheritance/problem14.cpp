/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Private Inheritance
// In this example, we have a base class Base with a public member function.
// The derived class Derived inherits from Base using private inheritance.
// We demonstrate that public members of the base class are not directly accessible from outside the derived class.

#include <iostream>

// Base class
class Base {
public:
    void show() {
        std::cout << "Base class function." << std::endl;
    }
};

// Derived class with private inheritance
class Derived : private Base {
public:
    void display() {
        std::cout << "Derived class function." << std::endl;
    }
};

int main() {
    Derived derivedObj;

    // Access public member function of Derived
    derivedObj.display();

    // Attempt to access Base's show() function (error)
    // derivedObj.show();

    return 0;
}
