/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: June 2023
*/

#include <iostream>

// Problem: Find the GCD of two numbers using recursion.
// Expected Result: GCD of the two numbers.
int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}
int main() {
    std::cout << gcd(48, 18); // Output: 6
}
