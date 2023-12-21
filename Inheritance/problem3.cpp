/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Function Overriding
// In this example, we have a base class Shape and a derived class Circle.
// The Circle class overrides the draw method of the base class Shape.
// We use the virtual keyword in the Shape class to indicate that the draw method can be overridden by derived classes.
// In the main function, we create an instance of Circle and call its draw method. We also call the draw method of Shape through a pointer to a Shape object.

#include <iostream>

// Base class
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    // Create an instance of Circle
    Circle circle;

    // Call the draw method of Circle
    circle.draw();

    // Call the draw method of Shape through Circle
    Shape* shapePtr = &circle;
    shapePtr->draw();

    return 0;
}
