/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Sum of Digits
// This program calculates the sum of the digits of a given number using a while loop.
// It initializes sum as 0 and temp as the input number.
// Inside the loop, it extracts the last digit of temp, adds it to sum, and updates temp by removing the last digit.
// The loop continues until temp becomes 0.
// Finally, it displays the sum.
// Test case:
// Input: 12345
// Expected output: Sum of digits of 12345 is: 15


#include <iostream>

int main() {
    int number;
    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    // Read the input number from the user
    std::cin >> number;

    int sum = 0;
    int temp = number;
    // Calculate the sum of digits
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    // Display the sum
    std::cout << "Sum of digits of " << number << " is: " << sum << std::endl;

    return 0;
}

