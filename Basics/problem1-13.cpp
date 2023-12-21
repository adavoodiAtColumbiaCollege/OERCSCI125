/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: ASCII Value
// This program displays the ASCII value of a given character using type casting.
// It prompts the user to enter a character and reads the input.
// It uses static_cast<int>(ch) to convert the character ch to its corresponding ASCII value.
// Finally, it displays the ASCII value.
// Test case:
// Input: A
// Expected output: ASCII value of A is: 65

#include <iostream>

int main() {
    char ch;
    // Prompt the user to enter a character
    std::cout << "Enter a character: ";
    // Read the input character from the user
    std::cin >> ch;

    // Display the ASCII value of the character
    std::cout << "ASCII value of " << ch << " is: " << static_cast<int>(ch) << std::endl;

    return 0;
}

