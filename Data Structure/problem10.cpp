/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <set>

// Problem: Demonstrating the usage of a set with a custom comparator.

// Custom comparator for integers (reverse order)
struct ReverseComparator {
    bool operator() (int a, int b) const {
        return a > b;
    }
};

int main() {
    // Create a set of integers with a custom comparator
    std::set<int, ReverseComparator> reversedSet;

    // Add elements to the set
    reversedSet.insert(5);
    reversedSet.insert(2);
    reversedSet.insert(8);

    // Display the contents of the set (in reverse order)
    std::cout << "Set Contents (Reverse Order): ";
    for (int num : reversedSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create an empty set with a custom comparator.
    // 2. Insert integers 5, 2, and 8 into the set.
    // 3. Display the contents of the set in reverse order.

    return 0;
}
