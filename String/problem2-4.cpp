/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Substring Extraction
// This program extracts a substring from a given string using the substr() function.
// It prompts the user to enter a string and reads the input using std::getline().
// It prompts the user to enter the starting index and length of the substring and reads the inputs using std::cin.
// It extracts the substring using str.substr(start, length) and stores it in the substring variable.
// Finally, it displays the extracted substring.
// Test case:
// Input: "Hello, World!", starting index: 7, length: 5
// Expected output: Substring: "World"


#include <iostream>
#include <string>

int main() {
    std::string str;
    int start, length;
    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    // Prompt the user to enter the starting index and length of the substring
    std::cout << "Enter the starting index: ";
    std::cin >> start;
    std::cout << "Enter the length: ";
    std::cin >> length;

    // Extract the substring
    std::string substring = str.substr(start, length);

    // Display the extracted substring
    std::cout << "Substring: " << substring << std::endl;

    return 0;
}


