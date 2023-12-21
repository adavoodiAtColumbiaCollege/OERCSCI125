/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Polymorphism with Base Class Pointers
// In this example, we have a base class Animal with a virtual function makeSound.
// The derived classes Dog and Cat override the makeSound function.
// In the main function, we create instances of Dog and Cat and store pointers to these objects, including dynamic allocation.
// We demonstrate polymorphic behavior by iterating through the array of base class pointers and calling the makeSound function.
//

#include <iostream>

// Base class
class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

// Derived classes
class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Dog barks." << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Cat meows." << std::endl;
    }
};

int main() {
    Animal* animals[3];
    Dog dog;
    Cat cat;

    animals[0] = &dog;
    animals[1] = &cat;
    animals[2] = new Dog(); // Dynamic allocation

    // Polymorphic behavior through base class pointers
    for (const Animal* animalPtr : animals) {
        animalPtr->makeSound();
    }

    // Clean up dynamically allocated object
    delete animals[2];

    return 0;
}
