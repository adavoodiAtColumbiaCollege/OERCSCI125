/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Return a pointer from a function.
// Expected result: Dynamically allocated value (e.g., 30).
int* allocate() {
    int *p = new int(30);
    return p;
}
int main() {
    int *ptr = allocate();
    std::cout << *ptr << std::endl;
    delete ptr;
}
