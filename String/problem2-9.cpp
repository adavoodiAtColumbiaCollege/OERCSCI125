/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Counting Occurrences of a Substring in a String
// This program counts the number of occurrences of a given substring in a string using the find() function.
// It prompts the user to enter a string and reads the input using std::getline().
// It prompts the user to enter a substring to search for and reads the input using std::getline().
// It initializes a counter variable called count to 0 and a position variable to store the position of the substring.
// It uses a while loop to find the first occurrence of the substring using str.find(substring) and increments the count if found.
// It continues to find subsequent occurrences of the substring using str.find(substring, position + 1) until no more occurrences are found.
// Finally, it displays the count of occurrences.
// Test case:
// Input: "Hello, Hello, Hello", substring: "Hello"
// Expected output: Number of occurrences: 3

#include <iostream>
#include <string>

int main() {
    std::string str, substring;
    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    // Prompt the user to enter a substring to search for
    std::cout << "Enter a substring: ";
    std::getline(std::cin, substring);

    // Count the occurrences of the substring in the string
    int count = 0;
    size_t position = str.find(substring);
    while (position != std::string::npos) {
        count++;
        position = str.find(substring, position + 1);
    }

    // Display the count of occurrences
    std::cout << "Number of occurrences: " << count << std::endl;

    return 0;
}


