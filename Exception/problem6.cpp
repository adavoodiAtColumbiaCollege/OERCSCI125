/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Handling Uncaught Exceptions
// In this example, an uncaught exception is thrown in the throwException function.
// We set a custom terminate handler using std::set_terminate to handle uncaught exceptions.
// The terminate handler is called when an uncaught exception occurs, and we use it to print a message and abort the program.

#include <iostream>
#include <stdexcept>

void throwException() {
    throw std::runtime_error("Unhandled exception");
}

int main() {
    std::set_terminate([]() {
        std::cerr << "Terminate handler called" << std::endl;
        std::abort();
    });

    try {
        throwException();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
