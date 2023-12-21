/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Abstract Class with Partial Implementation
// In this example, we have an abstract base class Shape with an abstract virtual method draw and a concrete method printArea.
// The derived class Circle implements the draw method.
// In the main function, we create an instance of Circle and demonstrate abstraction by calling both the overridden virtual method and the concrete method.
//

#include <iostream>

// Abstract base class
class Shape {
public:
    // Abstract virtual method
    virtual void draw() const = 0; // Pure virtual function (abstract)

    // Concrete method
    void printArea() const {
        std::cout << "Area: ";
    }
};

// Derived class implementing the virtual method
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Circle circle;

    circle.draw(); // Calls the overridden virtual method
    circle.printArea(); // Calls the concrete method

    return 0;
}
