/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: June 2023
*/

#include <iostream>

#include <iostream>
using namespace std;

class Rectangle {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() { return length * width; }
};

int main() {
    Rectangle myRectangle(4.0, 5.0);
    cout << "Rectangle area: " << myRectangle.area() << endl;
    return 0;
}
