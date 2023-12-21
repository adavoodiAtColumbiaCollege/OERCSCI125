/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Multiple Catch Blocks
// In this example, we have two catch blocks: one for std::runtime_error and another for the base class std::exception.
// The most specific catch block (std::runtime_error) is executed because it matches the exception type.
//

#include <iostream>

int main() {
    try {
        int denominator = 0;
        if (denominator == 0) {
            throw std::runtime_error("Division by zero");
        }
        int result = 10 / denominator;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime error caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
