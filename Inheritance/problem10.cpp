/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Using final to Prevent Further Inheritance
// In this example, we have a base class Base with the final specifier, which prevents further inheritance from this class.
// An attempt to create a derived class Derived from Base is provided but commented out

#include <iostream>

// Base class with final specifier
class Base final {
public:
    void show() {
        std::cout << "Base class function." << std::endl;
    }
};

// Attempt to create a derived class (error)
/*class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class function." << std::endl;
    }
};*/

int main() {
    Base baseObj;
    baseObj.show();

    return 0;
}
