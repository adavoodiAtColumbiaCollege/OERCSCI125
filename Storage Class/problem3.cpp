/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// External variable used across multiple functions
extern int externalVar; // Declaration
void externalStorageExample() {
    std::cout << externalVar << std::endl;
}
int externalVar = 5; // Definition
int main() {
    externalStorageExample();
}
