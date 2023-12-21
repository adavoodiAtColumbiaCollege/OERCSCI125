/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Dynamically allocate an array.
// Expected Result: A dynamically allocated array of integers.
int main() {
    int size = 5;
    int *arr = new int[size];
    // Code to initialize and display array
    delete[] arr;
}
