/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Calculate the area and perimeter of a rectangle using call-by-reference.
// Expected Result: Calculated area and perimeter.
void calcRectangle(int length, int width, int &area, int &perimeter) {
    area = length * width;
    perimeter = 2 * (length + width);
}
int main() {
    int length = 5, width = 4, area, perimeter;
    calcRectangle(length, width, area, perimeter);
    // Output: area = 20, perimeter = 18
}
