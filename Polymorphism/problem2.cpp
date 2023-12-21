/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Polymorphic Function Call Using References
// In this example, we have a base class Animal with a virtual function makeSound.
// The derived class Dog overrides the makeSound function.
// In the main function, we create instances of both Animal and Dog, and we use references of type const Animal& to demonstrate polymorphic function calls. The appropriate version of makeSound is called based on the actual object type.

#include <iostream>

// Base class
class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Dog barks." << std::endl;
    }
};

int main() {
    Animal animal;
    Dog dog;

    // Polymorphic function call using references
    const Animal& ref1 = animal;
    const Animal& ref2 = dog;

    ref1.makeSound(); // Calls the base class function
    ref2.makeSound(); // Calls the derived class function

    return 0;
}
