/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Protected Inheritance
// In this example, we have a base class Base with a protected member variable.
// The derived class Derived inherits from Base using protected inheritance.
// We demonstrate that the protected member of the base class is accessible within the derived class.

#include <iostream>

// Base class
class Base {
protected:
    int protectedVar;

public:
    Base(int value) : protectedVar(value) {
    }
};

// Derived class with protected inheritance
class Derived : protected Base {
public:
    Derived(int value) : Base(value) {
    }

    void displayProtectedVar() {
        std::cout << "ProtectedVar from Derived: " << protectedVar << std::endl;
    }
};

int main() {
    Derived derivedObj(42);

    // Access protected member through the derived class
    derivedObj.displayProtectedVar();

    return 0;
}
