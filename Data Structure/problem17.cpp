/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


#include <iostream>
#include <set>

// Problem: Demonstrating the usage of a multiset to store duplicate values.

int main() {
    // Create a multiset of integers (allows duplicates)
    std::multiset<int> multiSet;

    // Add elements to the multiset
    multiSet.insert(5);
    multiSet.insert(2);
    multiSet.insert(5); // Duplicate value
    multiSet.insert(8);

    // Display the contents of the multiset
    std::cout << "Multiset Contents (With Duplicates): ";
    for (int num : multiSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create a multiset to store integers (allows duplicates).
    // 2. Insert integers 5, 2, and 5 (duplicate) into the multiset.
    // 3. Display the contents of the multiset (with duplicates).

    return 0;
}
