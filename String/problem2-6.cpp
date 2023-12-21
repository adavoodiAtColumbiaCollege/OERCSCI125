/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Uppercase and Lowercase Conversion
// This program converts a given string to its uppercase and lowercase versions using the std::toupper() and std::tolower() functions.
// It prompts the user to enter a string and reads the input using std::getline().
// It creates two copies of the string: uppercase and lowercase.
// It iterates over each character of the uppercase string and converts it to uppercase using std::toupper().
// Similarly, it iterates over each character of the lowercase string and converts it to lowercase using std::tolower().
// Finally, it displays the uppercase and lowercase versions of the string.
// Test case:
// Input: "Hello, World!"
// Expected output:
// Uppercase: "HELLO, WORLD!"
// Lowercase: "hello, world!"


#include <iostream>
#include <string>

int main() {
    std::string str;
    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Convert the string to uppercase
    std::string uppercase = str;
    for (char& ch : uppercase) {
        ch = std::toupper(ch);
    }

    // Convert the string to lowercase
    std::string lowercase = str;
    for (char& ch : lowercase) {
        ch = std::tolower(ch);
    }

    // Display the uppercase and lowercase versions of the string
    std::cout << "Uppercase: " << uppercase << std::endl;
    std::cout << "Lowercase: " << lowercase << std::endl;

    return 0;
}
