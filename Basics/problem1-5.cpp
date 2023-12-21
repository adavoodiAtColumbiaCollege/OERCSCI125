/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Factorial
// This program calculates the factorial of a given number using a for loop.
// It initializes factorial as 1 and multiplies it with each number from 1 to the input number.
// Finally, it displays the factorial.
// Test case:
// Input: 5
// Expected output: Factorial of 5 is: 120


#include <iostream>

int main() {
    int number;
    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    // Read the input number from the user
    std::cin >> number;

    int factorial = 1;
    // Calculate the factorial of the number
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    // Display the factorial
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;

    return 0;
}
