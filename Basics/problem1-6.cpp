/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Fibonacci Series

// This program generates the Fibonacci series up to a specified number of terms using a for loop.
// It initializes num1 and num2 as the first two numbers of the series.
// Inside the loop, it calculates the next Fibonacci number by adding the previous two numbers.
// It displays each Fibonacci number.
// Test case:
// Input: 8
// Expected output: Fibonacci Series: 0 1 1 2 3 5 8 13

#include <iostream>

int main() {
    int terms;
    // Prompt the user to enter the number of terms
    std::cout << "Enter the number of terms: ";
    // Read the input number from the user
    std::cin >> terms;

    int num1 = 0, num2 = 1;
    // Generate and display the Fibonacci series
    std::cout << "Fibonacci Series: ";
    std::cout << num1 << " " << num2 << " ";
    for (int i = 3; i <= terms; ++i) {
        int sum = num1 + num2;
        num1 = num2;
        num2 = sum;
        std::cout << num2 << " ";
    }
    std::cout << std::endl;

    return 0;
}