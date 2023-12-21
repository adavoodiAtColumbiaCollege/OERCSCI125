/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Virtual Destructor
// In this example, we have a base class Base with a virtual destructor.
// The derived class Derived inherits from Base and also has a destructor.
// We create an instance of Derived and then delete it using a pointer to the base class, demonstrating the importance of a virtual destructor for proper cleanup.

#include <iostream>

// Base class with a virtual destructor
class Base {
public:
    virtual ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived destructor called." << std::endl;
    }
};

int main() {
    // Create an instance of Derived
    Base* ptr = new Derived;

    // Delete the object
    delete ptr;

    return 0;
}
