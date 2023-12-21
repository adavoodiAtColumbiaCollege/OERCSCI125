/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


#include <iostream>
#include <set>

// Problem: Demonstrating the usage of a set container to store unique values.

int main() {
    // Create a set of integers
    std::set<int> uniqueNumbers;

    // Add elements to the set
    uniqueNumbers.insert(5);
    uniqueNumbers.insert(2);
    uniqueNumbers.insert(8);
    uniqueNumbers.insert(5); // Duplicate value, will not be added

    // Display the contents of the set
    std::cout << "Set Contents: ";
    for (int num : uniqueNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create an empty set.
    // 2. Insert integers 5, 2, 8, and 5 (duplicate) into the set.
    // 3. Display the unique values stored in the set.

    return 0;
}
