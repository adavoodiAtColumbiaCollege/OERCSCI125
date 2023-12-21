/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Modify a variable's value in a function using a pointer.
// Expected result: Modified value of 'var' (e.g., 20).
void modify(int *p) { *p = 20; }
int main() {
    int var = 10;
    modify(&var);
    std::cout << var << std::endl;
}
