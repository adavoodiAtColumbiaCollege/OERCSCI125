/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Function Overloading in Inheritance
// In this example, we have a base class Shape with a draw function.
// The derived class Circle overloads the draw function by adding an additional parameter.
// We demonstrate calling both the overloaded draw function in the derived class and the draw function from the base class.

#include <iostream>

// Base class
class Shape {
public:
    void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    // Overloaded draw function in the derived class
    void draw(int radius) {
        std::cout << "Drawing a circle with radius " << radius << "." << std::endl;
    }
};

int main() {
    Circle circle;

    // Call the overloaded draw function from the derived class
    circle.draw(5);

    // Call the base class's draw function
    circle.draw();

    return 0;
}
