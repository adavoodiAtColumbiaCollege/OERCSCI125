/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Abstract Class with Data Members
// In this example, we have an abstract base class Vehicle with a data member speed and an abstract virtual method display.
// The derived class Car adds a data member brand and implements the display method.
// In the main function, we create an instance of Car and demonstrate abstraction by calling the overridden virtual method.
//

#include <iostream>

// Abstract base class
class Vehicle {
protected:
    int speed;

public:
    Vehicle(int s) : speed(s) {}

    // Abstract virtual method
    virtual void display() const = 0; // Pure virtual function (abstract)
};

// Derived class implementing the virtual method
class Car : public Vehicle {
private:
    std::string brand;

public:
    Car(int s, const std::string& b) : Vehicle(s), brand(b) {}

    void display() const override {
        std::cout << "Car brand: " << brand << ", Speed: " << speed << " mph" << std::endl;
    }
};

int main() {
    Car myCar(60, "Toyota");

    myCar.display(); // Calls the overridden virtual method

    return 0;
}
