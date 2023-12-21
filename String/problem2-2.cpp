/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem2: Concatenation of Two Strings
// This program concatenates two given strings using the + operator.
// It prompts the user to enter two strings and reads the inputs using std::getline().
// It concatenates str1 and str2 using the + operator and stores the result in the result variable.
// Finally, it displays the concatenated string.
// Test case:
// Input: "Hello" and "World!"
// Expected output: Concatenated string: "HelloWorld!"


#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    // Prompt the user to enter two strings
    std::cout << "Enter string 1: ";
    std::getline(std::cin, str1);
    std::cout << "Enter string 2: ";
    std::getline(std::cin, str2);

    // Concatenate the two strings
    std::string result = str1 + str2;

    // Display the concatenated string
    std::cout << "Concatenated string: " << result << std::endl;

    return 0;
}

