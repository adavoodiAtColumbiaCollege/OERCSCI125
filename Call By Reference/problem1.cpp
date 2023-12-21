/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Swap two numbers using call-by-reference.
// Expected Result: Values of a and b are swapped.
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 5, b = 10;
    swap(a, b);
    // Output: a = 10, b = 5
}
