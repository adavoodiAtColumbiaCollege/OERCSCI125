/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

//Input and Output
// This program prompts the user to enter a number, reads the input, and displays the entered number.
// Test case:
// Input: 42
// Expected output: You entered: 42

#include <iostream>

int main() {
    int number;
    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    // Read the input number from the user
    std::cin >> number;
    // Display the entered number
    std::cout << "You entered: " << number << std::endl;
    return 0;
}
