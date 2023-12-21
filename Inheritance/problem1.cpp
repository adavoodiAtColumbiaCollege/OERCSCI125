/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Basic Inheritance
// In this example, we have a base class Animal and a derived class Dog.
// The Dog class inherits from the Animal class using public inheritance.
// Both classes have a speak method, but the Dog class overrides the speak method to provide its own implementation.
// In the main function, we create an instance of Dog and call its speak method. We also call the speak method of Animal through the Dog object.

#include <iostream>

// Base class
class Animal {
public:
    void speak() {
        std::cout << "Animal speaks." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void speak() {
        std::cout << "Dog barks." << std::endl;
    }
};

int main() {
    // Create an instance of Dog
    Dog myDog;

    // Call the speak method of Dog
    myDog.speak();

    // Call the speak method of Animal through Dog
    myDog.Animal::speak();

    return 0;
}
