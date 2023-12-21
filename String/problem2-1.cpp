/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem1: Length of a String
// This program calculates the length of a given string using the length() function.
// It prompts the user to enter a string and reads the input using std::getline().
// It calculates the length of the string using str.length() and stores it in the length variable.
// Finally, it displays the length of the string.
// Test case:
// Input: "Hello, World!"
// Expected output: Length of the string: 13


#include <iostream>
#include <string>

int main() {
    std::string str;
    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    // Read the input string from the user
    std::getline(std::cin, str);

    // Calculate the length of the string
    int length = str.length();

    // Display the length of the string
    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}
