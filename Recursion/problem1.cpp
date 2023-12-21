/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Calculate the factorial of a number using recursion.
// Expected Result: Factorial of the given number.
int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}
int main() {
    std::cout << factorial(5); // Output: 120
}
