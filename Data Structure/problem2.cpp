/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


#include <iostream>
#include <list>

// Problem: Demonstrating the usage of a list container.

int main() {
    // Create a list of characters
    std::list<char> characters;

    // Add elements to the list
    characters.push_back('A');
    characters.push_back('B');
    characters.push_back('C');

    // Display the contents of the list
    std::cout << "List Contents: ";
    for (char ch : characters) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create an empty list.
    // 2. Add characters 'A', 'B', and 'C' to the list.
    // 3. Display the contents of the list.

    return 0;
}
