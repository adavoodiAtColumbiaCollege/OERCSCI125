/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/


//Polymorphism with Interface Classes
// In this example, we have an interface class Drawable with a pure virtual function draw.
// The classes Circle and Rectangle implement the Drawable interface by providing their own draw functions.
// In the main function, we create instances of Circle and Rectangle and store pointers to these objects in an array of Drawable pointers. We demonstrate polymorphic behavior by iterating through the array and calling the draw function through the interface pointers.


#include <iostream>

// Interface class
class Drawable {
public:
    virtual void draw() const = 0; // Pure virtual function (interface)
};

// Classes implementing the Drawable interface
class Circle : public Drawable {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Rectangle : public Drawable {
public:
    void draw() const override {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

int main() {
    // Array of objects implementing the Drawable interface
    const Drawable* shapes[2];
    Circle circle;
    Rectangle rectangle;

    shapes[0] = &circle;
    shapes[1] = &rectangle;

    // Polymorphic behavior through interface pointers
    for (const Drawable* shapePtr : shapes) {
        shapePtr->draw();
    }

    return 0;
}
