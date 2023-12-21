/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: June 2023
*/

#include <iostream>

// Implement a double pointer and access a variable's value.
// Expected result: Value of 'var' (e.g., 10).
int main() {
    int var = 10;
    int *ptr = &var;
    int **ptr2 = &ptr;
    std::cout << **ptr2 << std::endl;
}
