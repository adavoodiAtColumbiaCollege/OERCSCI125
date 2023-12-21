/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>

struct Rectangle {
    double length;
    double width;
};

int main() {
    Rectangle rect = {4.5, 3.0};
    cout << "Area: " << rect.length * rect.width << endl;
    return 0;
}
