/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Removing Punctuation from a String
// This program removes punctuation characters from a given string using the std::ispunct() function.
// It prompts the user to enter a string and reads the input using std::getline().
// It creates an empty string called cleaned.
// It iterates over each character of the str string and checks if it is not a punctuation character using std::ispunct().
// If the character is not a punctuation character, it appends it to the cleaned string.
// Finally, it displays the cleaned string.
// Test case:
// Input: "Hello, World!"
// Expected output: Cleaned string: "Hello World"

#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Remove punctuation from the string
    std::string cleaned;
    for (char ch : str) {
        if (!std::ispunct(ch)) {
            cleaned += ch;
        }
    }

    // Display the cleaned string
    std::cout << "Cleaned string: " << cleaned << std::endl;

    return 0;
}


