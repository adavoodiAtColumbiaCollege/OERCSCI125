/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Abstract Class with Concrete and Virtual Methods
// In this example, we have an abstract base class Animal with a concrete method eat and an abstract virtual method makeSound.
// The derived class Dog implements the makeSound method.
// In the main function, we create an instance of Dog and demonstrate abstraction by calling both the concrete and virtual methods.

#include <iostream>

// Abstract base class
class Animal {
public:
    // Concrete method
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }

    // Abstract virtual method
    virtual void makeSound() const = 0; // Pure virtual function (abstract)
};

// Derived class implementing the virtual method
class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Dog barks." << std::endl;
    }
};

int main() {
    Dog dog;

    dog.eat(); // Calls the concrete method
    dog.makeSound(); // Calls the overridden virtual method

    return 0;
}
