/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>

class Box {
    int width;
public:
    Box() : width(10) {}
    friend void printWidth(Box box);
};

void printWidth(Box box) {
    cout << "Width of box: " << box.width << endl;
}

int main() {
    Box box;
    printWidth(box);
    return 0;
}
