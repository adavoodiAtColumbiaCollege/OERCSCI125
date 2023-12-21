/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Largest Number
// This program finds the largest number among a given count of numbers using a for loop.
// It prompts the user to enter each number and reads the input.
// Inside the loop, it compares each number with the current largest number and updates largest if a larger number is found.
// Finally, it displays the largest number.
// Test case:
// Input count: 5
// Input numbers: 7, 3, 9, 5, 2
// Expected output: Largest number is: 9

#include <iostream>

int main() {
    int n;
    // Prompt the user to enter the count of numbers
    std::cout << "Enter the count of numbers: ";
    // Read the input count from the user
    std::cin >> n;

    int largest = 0;
    int number;
    // Find the largest number
    for (int i = 1; i <= n; ++i) {
        std::cout << "Enter number " << i << ": ";
        std::cin >> number;

        if (number > largest) {
            largest = number;
        }
    }

    // Display the largest number
    std::cout << "Largest number is: " << largest << std::endl;

    return 0;
}

