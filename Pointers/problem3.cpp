/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Use a pointer to access elements of an array.
// Expected result: Elements of the array (e.g., 1, 2, 3).
int main() {
    int arr[] = {1, 2, 3};
    int *ptr = arr;
    for(int i = 0; i < 3; i++) {
        std::cout << *(ptr + i) << ' ';
    }
}
