/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Probelm8: Removing Whitespace from a String
// This program removes whitespace characters from a given string.
// It prompts the user to enter a string and reads the input using std::getline().
// It creates an empty string called trimmed.
// It iterates over each character of the str string and checks if it is not a whitespace character using std::isspace().
// If the character is not a whitespace character, it appends it to the trimmed string.
// Finally, it displays the trimmed string.
// Test case:
// Input: "Hello, World! "
// Expected output: Trimmed string: "Hello,World!"

#include <iostream>
#include <string>

int main() {
    std::string str;
    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Remove whitespace from the string
    std::string trimmed;
    for (char ch : str) {
        if (!std::isspace(ch)) {
            trimmed += ch;
        }
    }

    // Display the trimmed string
    std::cout << "Trimmed string: " << trimmed << std::endl;

    return 0;
}
