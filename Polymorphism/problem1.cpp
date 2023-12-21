/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Virtual Functions and Runtime Polymorphism
// In this example, we have a base class Shape with a virtual function draw.
// The derived class Circle overrides the draw function.
// In the main function, we create instances of both Shape and Circle and demonstrate runtime polymorphism by assigning the address of a Circle object to a pointer of type Shape. The draw function is called through the pointer, and the overridden version in Circle is executed.


#include <iostream>

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() const {
        std::cout << "Drawing a shape." << std::endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    // Override the draw function
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Shape* shapePtr;

    // Create instances of Shape and Circle
    Shape shape;
    Circle circle;

    // Polymorphism - Assign the address of Circle to shapePtr
    shapePtr = &circle;

    // Call the draw function (resolved at runtime)
    shapePtr->draw();

    return 0;
}
