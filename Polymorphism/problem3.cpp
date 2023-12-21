/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Polymorphic Behavior with Abstract Base Class
// In this example, we have an abstract base class Shape with a pure virtual function draw.
// The derived classes Circle and Rectangle implement the draw function.
// In the main function, we create instances of Circle and Rectangle and store their addresses in an array of pointers to Shape objects. We demonstrate polymorphic behavior by iterating through the array and calling the draw function through the pointers.

#include <iostream>

// Abstract base class
class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function (abstract)
};

// Derived classes implementing the draw function
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
    // Array of pointers to Shape objects
    const Shape* shapes[2];
    Circle circle;
    Rectangle rectangle;

    shapes[0] = &circle;
    shapes[1] = &rectangle;

    // Polymorphic behavior through pointers
    for (const Shape* shapePtr : shapes) {
        shapePtr->draw();
    }

    return 0;
}
