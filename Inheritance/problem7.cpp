/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Access Control in Inheritance
// In this example, we have a base class Vehicle with a protected member speed.
// The derived class Car inherits from Vehicle with public inheritance.
// We demonstrate that protected members of the base class are accessible within the derived class, and we also access the derived class's own member.

#include <iostream>

// Base class
class Vehicle {
protected:
    int speed;

public:
    Vehicle(int s) : speed(s) {
    }

    void displaySpeed() {
        std::cout << "Speed: " << speed << " mph" << std::endl;
    }
};

// Derived class with public inheritance
class Car : public Vehicle {
public:
    Car(int s) : Vehicle(s) {
    }

    void showSpeed() {
        std::cout << "Car's speed: " << speed << " mph" << std::endl;
    }
};

int main() {
    Car myCar(60);

    // Accessing base class member from the derived class
    myCar.displaySpeed();

    // Accessing derived class member
    myCar.showSpeed();

    return 0;
}
