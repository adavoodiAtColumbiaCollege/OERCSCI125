/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Multiple Inheritance
// In this example, we have two base classes, Animal and Bird, and a derived class Eagle.
// The Eagle class inherits from both Animal and Bird using multiple inheritance.
// Each base class provides its own set of methods, and the Eagle class can access methods from both base classes.
// In the main function, we create an instance of Eagle and call methods from both base classes and the derived class.

#include <iostream>

// Base class 1
class Animal {
public:
    void eat() {
        std::cout << "Animal eats." << std::endl;
    }
};

// Base class 2
class Bird {
public:
    void fly() {
        std::cout << "Bird flies." << std::endl;
    }
};

// Derived class inheriting from two base classes
class Eagle : public Animal, public Bird {
public:
    void hunt() {
        std::cout << "Eagle hunts." << std::endl;
    }
};

int main() {
    // Create an instance of Eagle
    Eagle eagle;

    // Call methods from both base classes
    eagle.eat();
    eagle.fly();

    // Call a method from the derived class
    eagle.hunt();

    return 0;
}
