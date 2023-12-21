/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Increment a value using call-by-reference.
// Expected Result: Value of num is incremented.
void increment(int &num) {
    num++;
}
int main() {
    int num = 10;
    increment(num);
    // Output: num = 11
}
