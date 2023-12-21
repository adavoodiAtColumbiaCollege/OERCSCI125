/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Even or Odd
// This program checks if a given number is even or odd using the modulo operator (%).
// It displays the result.
// Test case:
// Input: 7
// Expected output: 7 is odd.

#include <iostream>

int main() {
    int number;
    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    // Read the input number from the user
    std::cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}
