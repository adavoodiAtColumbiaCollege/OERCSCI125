/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Basic Exception Handling
// In this example, we attempt to perform division by zero.
// If an exception occurs (in this case, a std::runtime_error), it is caught and an error message is displayed.

#include <iostream>

int main() {
    try {
        int denominator = 0;
        if (denominator == 0) {
            throw std::runtime_error("Division by zero");
        }
        int result = 10 / denominator;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
