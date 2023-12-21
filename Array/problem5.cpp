/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: June 2023
*/

#include <iostream>

// Problem: Find the number of elements in an array.
// Expected Result: Size of the array (e.g., 5).
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Size of the array: " << size << std::endl;
}
