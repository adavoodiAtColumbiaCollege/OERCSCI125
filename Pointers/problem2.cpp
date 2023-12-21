/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Increase a pointer's value and observe the address change.
// Expected result: Address of 'var' + sizeof(int)
int main() {
    int var = 10;
    int *ptr = &var;
    ptr++;
    std::cout << ptr << std::endl;
}
