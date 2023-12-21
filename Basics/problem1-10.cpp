/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Palindrome Checker
// This program checks if a given number is a palindrome by reversing the number and comparing it with the original number.
// It follows the same approach as the "Reverse a Number" program.
// After reversing the number, it checks if the original number is equal to the reversed number using an if statement.
// The result is displayed.
// Test case:
// Input: 12321
// Expected output: 12321 is a palindrome.

#include <iostream>

int main() {
    int number;
    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    // Read the input number from the user
    std::cin >> number;

    int reversed = 0;
    int temp = number;
    // Reverse the number
    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    // Check if the number is a palindrome
    if (number == reversed) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
