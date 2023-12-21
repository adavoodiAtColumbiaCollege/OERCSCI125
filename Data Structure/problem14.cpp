/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <map>
#include <string>

// Problem: Demonstrating the usage of a map as a phone book.

int main() {
    // Create a phone book as a map (name -> phone number)
    std::map<std::string, std::string> phoneBook;

    // Add entries to the phone book
    phoneBook["Alice"] = "555-1234";
    phoneBook["Bob"] = "555-5678";
    phoneBook["Charlie"] = "555-7890";

    // Look up a phone number by name
    std::string nameToFind = "Bob";
    if (phoneBook.find(nameToFind) != phoneBook.end()) {
        std::cout << nameToFind << "'s Phone Number: " << phoneBook[nameToFind] << std::endl;
    } else {
        std::cout << nameToFind << " not found in the phone book." << std::endl;
    }

    // Testing Scenario:
    // 1. Create a phone book as a map.
    // 2. Add entries with names and phone numbers.
    // 3. Look up a phone number by name and display it.

    return 0;
}
