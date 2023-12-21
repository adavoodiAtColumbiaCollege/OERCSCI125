/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/

//Hierarchical Inheritance
// In this example, we have a base class Shape and two derived classes, Circle and Rectangle.
// Both derived classes inherit from the Shape base class, creating a hierarchical inheritance structure.
// Each derived class overrides the draw method to provide its own implementation of drawing.
// In the main function, we create instances of both Circle and Rectangle and call their draw methods to demonstrate the hierarchical inheritance structure.
// These examples illustrate various aspects of inheritance in C++, including basic inheritance, constructor inheritance, function overriding, multiple inheritance, and hierarchical inheritance. Each example includes a main function to demonstrate how the classes and inheritance are used.

#include <iostream>

// Base class
class Shape {
public:
    void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() {
        std::cout << "Drawing a circle." << std::endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

int main() {
    // Create instances of Circle and Rectangle
    Circle circle;
    Rectangle rectangle;

    // Call draw methods of both classes
    circle.draw();
    rectangle.draw();

    return 0;
}
