/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Using using to Inherit Constructors
// In this example, we have a base class Base with a constructor that takes an integer parameter.
// The derived class Derived uses the using keyword to inherit the constructors from Base.
// We demonstrate that when creating an instance of Derived, it calls the constructor of Base with the specified parameter.


#include <iostream>

// Base class
class Base {
public:
    Base(int value) {
        std::cout << "Base class constructor called with value: " << value << std::endl;
    }
};

// Derived class inheriting constructors from Base
class Derived : public Base {
public:
    using Base::Base; // Inherit constructors from Base
};

int main() {
    // Create an instance of Derived, which also calls Base's constructor
    Derived derivedObj(42);

    return 0;
}
