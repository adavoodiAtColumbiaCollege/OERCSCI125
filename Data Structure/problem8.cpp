/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <vector>

// Problem: Demonstrating the usage of a 2D vector.

int main() {
    // Create a 2D vector of integers
    std::vector<std::vector<int>> matrix;

    // Initialize a 3x3 matrix
    for (int i = 0; i < 3; ++i) {
        std::vector<int> row;
        for (int j = 1; j <= 3; ++j) {
            row.push_back(j + i * 3);
        }
        matrix.push_back(row);
    }

    // Display the contents of the 2D vector
    std::cout << "2D Vector Contents: " << std::endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    // Testing Scenario:
    // 1. Create a 2D vector to represent a 3x3 matrix.
    // 2. Initialize the matrix with values.
    // 3. Display the contents of the 2D vector.

    return 0;
}
