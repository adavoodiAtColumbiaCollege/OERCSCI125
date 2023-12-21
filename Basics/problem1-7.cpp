/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Prime Number Checker
// This program checks if a given number is prime or not using a for loop and an if statement.
// It divides the number by all numbers from 2 to half of the number.
// If the number is divisible by any of these numbers, it is not prime.
// The result is displayed.
// Test case:
// Input: 17
// Expected output: 17 is a prime number.


#include <iostream>

int main() {
    int number;
    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    // Read the input number from the user
    std::cin >> number;

    bool isPrime = true;
    // Check if the number is prime
    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    // Display the result
    if (isPrime) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}

