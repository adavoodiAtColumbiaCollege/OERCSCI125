/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() { return 3.14 * radius * radius; }
};

int main() {
    Circle myCircle(5.0);
    cout << "Circle area: " << myCircle.area() << endl;
    return 0;
}
