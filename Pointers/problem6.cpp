/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Use a function pointer to execute a function.
// Expected result: Output of the function (e.g., "Hello").
void greet() { std::cout << "Hello" << std::endl; }
int main() {
    void (*funcPtr)() = &greet;
    (*funcPtr)();
}
