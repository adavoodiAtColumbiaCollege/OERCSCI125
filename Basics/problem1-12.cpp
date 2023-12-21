/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Sum of Natural Numbers
// This program calculates the sum of natural numbers up to a given positive integer using a for loop.
// It initializes sum as 0 and adds each number from 1 to n to sum.
// Finally, it displays the sum.
// Test case:
// Input: 10
// Expected output: Sum of natural numbers up to 10 is: 55

#include <iostream>

int main() {
    int n;
    // Prompt the user to enter a positive integer
    std::cout << "Enter a positive integer: ";
    // Read the input number from the user
    std::cin >> n;

    int sum = 0;
    // Calculate the sum of natural numbers up to n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Display the sum
    std::cout << "Sum of natural numbers up to " << n << " is: " << sum << std::endl;

    return 0;
}
