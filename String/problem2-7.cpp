/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Reversing a String
// This program reverses a given string using the std::reverse() function.
// It prompts the user to enter a string and reads the input using std::getline().
// It creates a copy of the string called reversed.
// It uses std::reverse() to reverse the characters in the reversed string.
// Finally, it displays the reversed string.
// Test case:
// Input: "Hello, World!"
// Expected output: Reversed string: "!dlroW ,olleH"

#include <iostream>
#include <string>

int main() {
    std::string str;
    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Reverse the string
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());

    // Display the reversed string
    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}


