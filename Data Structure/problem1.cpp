/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


#include <iostream>
#include <vector>

// Problem: Demonstrating the usage of a vector container.

int main() {
    // Create a vector of integers
    std::vector<int> numbers;

    // Add elements to the vector
    for (int i = 1; i <= 5; ++i) {
        numbers.push_back(i);
    }

    // Display the contents of the vector
    std::cout << "Vector Contents: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create an empty vector.
    // 2. Add integers from 1 to 5 into the vector.
    // 3. Display the contents of the vector.

    return 0;
}
