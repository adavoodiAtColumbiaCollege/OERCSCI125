/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>
// Dynamically allocate memory and free it.
// Expected result: The dynamically assigned value (e.g., 5).
int main() {
    int *ptr = new int(5);
    std::cout << *ptr << std::endl;
    delete ptr;
}
