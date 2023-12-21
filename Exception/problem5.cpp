/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/

// Using std::invalid_argument
// In this example, we use the standard exception class std::invalid_argument to handle the case of a negative age.
// If the age is negative, an instance of std::invalid_argument is thrown with an error message.
//


#include <iostream>
#include <stdexcept>

int main() {
    try {
        int age = -5;
        if (age < 0) {
            throw std::invalid_argument("Age cannot be negative");
        }
        std::cout << "Age: " << age << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
