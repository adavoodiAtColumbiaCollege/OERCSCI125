/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/

//Interface Class
// In this example, we have an interface class Drawable with two pure virtual methods: draw and resize.
// The concrete class Circle implements both draw and resize methods.
// In the main function, we create an instance of Circle and demonstrate abstraction by calling the overridden interface methods.
// These examples showcase abstraction through abstract base classes and interfaces, including cases with pure virtual functions, concrete methods, data members, and partial implementation. Abstraction allows you to define a common interface while leaving specific implementation details to derived classes.

#include <iostream>

// Interface class with pure virtual methods
class Drawable {
public:
    virtual void draw() const = 0; // Pure virtual function (abstract)
    virtual void resize(int width, int height) = 0; // Another pure virtual function
};

// Concrete class implementing the interface
class Circle : public Drawable {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }

    void resize(int width, int height) override {
        std::cout << "Resizing the circle to width " << width << " and height " << height << "." << std::endl;
    }
};

int main() {
    Circle circle;

    circle.draw(); // Calls the overridden draw method
    circle.resize(10, 15); // Calls the overridden resize method

    return 0;
}
