/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Reverse a Number
// This program reverses a given number using a while loop.
// It initializes reversed and temp as 0 and the input number, respectively.
// Inside the loop, it extracts the last digit of temp, multiplies reversed by 10, and adds the digit to reversed.
// It updates temp by removing the last digit.
// The loop continues until temp becomes 0.
// Finally, it displays the reversed number.
// Test case:
// Input: 12345
// Expected output: Reversed number: 54321

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

    // Display the reversed number
    std::cout << "Reversed number: " << reversed << std::endl;

    return 0;
}

