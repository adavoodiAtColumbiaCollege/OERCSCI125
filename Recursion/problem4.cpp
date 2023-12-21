/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Calculate x raised to the power of y using recursion.
// Expected Result: x^y.
int power(int x, int y) {
    if (y == 0) return 1;
    else return x * power(x, y - 1);
}
int main() {
    std::cout << power(2, 3); // Output: 8
}
