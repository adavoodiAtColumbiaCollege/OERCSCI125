/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Find the nth Fibonacci number using recursion.
// Expected Result: nth Fibonacci number.
int fibonacci(int n) {
    if (n <= 1) return n;
    else return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    std::cout << fibonacci(5); // Output: 5
}
