/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Overloading the Stream Insertion Operator (<<)
// In this example, we define a Point class to represent a point in 2D space.
// We overload the stream insertion operator << as a friend function to enable printing Point objects.
// In the main function, we create a Point object and use the overloaded << operator to display it.

#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point(int _x, int _y) : x(_x), y(_y) {}

    // Overloading the stream insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Point& p) {
        out << "(" << p.x << ", " << p.y << ")";
        return out;
    }
};

int main() {
    Point p(3, 4);

    // Using the overloaded << operator to display the Point object
    std::cout << "Point: " << p << std::endl;

    return 0;
}
