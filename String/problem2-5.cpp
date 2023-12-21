/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

#include <iostream>
#include <string>


// Problem: Finding a Character in a String
// This program finds the position of a given character in a string using the find() function.
// It prompts the user to enter a string and reads the input using std::getline().
// It prompts the user to enter a character to search for and reads the input using std::cin.
// It finds the position of the character in the string using str.find(ch) and stores it in the position variable.
// If the character is found, it displays the position; otherwise, it displays a message indicating that the character was not found.
// Test case:
// Input: "Hello, World!", character: 'W'
// Expected output: Character found at position: 7


int main() {
    std::string str;
    char ch;
    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    // Prompt the user to enter a character to search for
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // Find the character in the string
    size_t position = str.find(ch);

    // Display the position of the character (-1 if not found)
    if (position != std::string::npos) {
        std::cout << "Character found at position: " << position << std::endl;
    } else {
        std::cout << "Character not found." << std::endl;
    }

    return 0;
}
