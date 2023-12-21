/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Multilevel Inheritance
// In this example, we have a base class Vehicle and two derived classes, Car and SportsCar.
// Car inherits from Vehicle, and SportsCar inherits from Car, creating a multilevel inheritance hierarchy.
// We demonstrate calling methods from all three classes.

#include <iostream>

// Base class
class Vehicle {
public:
    void start() {
        std::cout << "Vehicle started." << std::endl;
    }
};

// Derived class 1
class Car : public Vehicle {
public:
    void drive() {
        std::cout << "Car is being driven." << std::endl;
    }
};

// Derived class 2 (multilevel inheritance)
class SportsCar : public Car {
public:
    void race() {
        std::cout << "Sports car is racing." << std::endl;
    }
};

int main() {
    SportsCar mySportsCar;

    // Call methods from all three classes
    mySportsCar.start();
    mySportsCar.drive();
    mySportsCar.race();

    return 0;
}
