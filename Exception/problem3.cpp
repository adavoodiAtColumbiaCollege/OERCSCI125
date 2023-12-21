/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Rethrowing an Exception
// In this example, an exception is thrown in the innerFunction.
// The outerFunction catches the exception, displays a message, and then rethrows the same exception using throw;.
// The exception is caught again in the main function.

#include <iostream>

void innerFunction() {
    throw std::runtime_error("Exception from inner function");
}

void outerFunction() {
    try {
        innerFunction();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught in outer function: " << e.what() << std::endl;
        throw; // Rethrow the same exception
    }
}

int main() {
    try {
        outerFunction();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught in main: " << e.what() << std::endl;
    }

    return 0;
}
