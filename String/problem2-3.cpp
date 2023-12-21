/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Probelm3: String Comparison

// This program compares two given strings using the compare() function.
// It prompts the user to enter two strings and reads the inputs using std::getline().
// It compares str1 and str2 using str1.compare(str2) and stores the result in the result variable.
// It displays the result of the comparison based on the value of result.
// Test case:
// Input: "Hello" and "Hello"
// Expected output: Strings are equal.

#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    // Prompt the user to enter two strings
    std::cout << "Enter string 1: ";
    std::getline(std::cin, str1);
    std::cout << "Enter string 2: ";
    std::getline(std::cin, str2);

    // Compare the two strings
    int result = str1.compare(str2);

    // Display the result of the comparison
    if (result == 0) {
        std::cout << "Strings are equal." << std::endl;
    } else if (result < 0) {
        std::cout << "String 1 is less than string 2." << std::endl;
    } else {
        std::cout << "String 1 is greater than string 2." << std::endl;
    }

    return 0;
}
