/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Abstract Base Class and Pure Virtual Functions
// In this example, we have an abstract base class Shape with a pure virtual function draw().
// The derived classes Circle and Rectangle must implement the draw() function to become concrete classes.
// We demonstrate creating instances of both Circle and Rectangle and calling their draw() methods.

#include <iostream>

// Abstract base class with a pure virtual function
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

// Derived classes implementing the draw function
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

int main() {
    // Create instances of Circle and Rectangle
    Circle circle;
    Rectangle rectangle;

    // Call the draw methods of both classes
    circle.draw();
    rectangle.draw();

    return 0;
}
