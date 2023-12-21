/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Catching All Exceptions
// In this example, we throw an integer as an exception, which is not derived from std::exception.
// The first catch block catches exceptions of type std::exception, but since the thrown object is not of this type, the catch-all (catch (...)) block is executed, catching any unknown exception.

#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw 42; // Throw an integer
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception caught" << std::endl;
    }

    return 0;
}
