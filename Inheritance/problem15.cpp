/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Interface Inheritance
// In this example, we have an abstract base class Shape that defines an interface using pure virtual functions.
// The derived classes Circle and Rectangle implement the interface by providing their own implementations of the draw function.
// We demonstrate creating instances of both Circle and Rectangle and calling their draw methods to showcase interface inheritance.
// These additional examples cover topics such as multilevel inheritance, protected inheritance, inheriting constructors, private inheritance, and interface inheritance, further illustrating the versatility of inheritance in C++.

#include <iostream>

// Abstract base class defining an interface
class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function (interface)
};

// Concrete derived classes implementing the interface
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
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
