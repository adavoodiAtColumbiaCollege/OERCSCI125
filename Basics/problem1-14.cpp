/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem: Count Vowels and Consonants
// This program counts the number of vowels and consonants in a given sentence.
// It prompts the user to enter a sentence and reads the input using std::getline.
// Inside the loop, it converts each character to lowercase using std::tolower for case-insensitive comparison.
// It uses std::isalpha to check if the character is a letter.
// If the character is a vowel, it increments the vowels count; otherwise, it increments the consonants count.
// Finally, it displays the counts of vowels and consonants.
// Test case:
// Input: Hello, World!
// Expected output:
// Number of vowels: 3
// Number of consonants: 7

#include <iostream>

int main() {
    std::string sentence;
    // Prompt the user to enter a sentence
    std::cout << "Enter a sentence: ";
    // Read the input sentence from the user
    std::getline(std::cin, sentence);

    int vowels = 0;
    int consonants = 0;

    // Count the number of vowels and consonants
    for (char ch : sentence) {
        // Convert the character to lowercase for comparison
        ch = std::tolower(ch);
        // Check if the character is a letter
        if (std::isalpha(ch)) {
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Display the count of vowels and consonants
    std::cout << "Number of vowels: " << vowels << std::endl;
    std::cout << "Number of consonants: " << consonants << std::endl;

    return 0;
}

