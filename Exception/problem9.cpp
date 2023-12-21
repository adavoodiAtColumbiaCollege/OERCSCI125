/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Catching User-Defined Exception
// In this example, we define a custom exception class MyException and throw an instance of it.
// The custom exception is caught in the catch block and the custom error message is displayed.

#include <iostream>
#include <stdexcept>

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred";
    }
};

int main() {
    try {
        throw MyException();
    } catch (const MyException& e) {
        std::cerr << "Custom exception caught: " << e.what() << std::endl;
    }

    return 0;
}
