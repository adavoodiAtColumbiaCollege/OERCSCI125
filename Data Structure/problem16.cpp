/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <list>
#include <algorithm>

// Problem: Demonstrating the usage of a list and sorting its elements.

int main() {
    // Create a list of integers
    std::list<int> numberList = {5, 2, 8, 1, 9};

    // Sort the list in ascending order
    numberList.sort();

    // Display the sorted list
    std::cout << "Sorted List Contents: ";
    for (int num : numberList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create a list of integers.
    // 2. Sort the list in ascending order.
    // 3. Display the sorted list.

    return 0;
}
