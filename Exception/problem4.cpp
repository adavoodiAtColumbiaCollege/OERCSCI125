/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Custom Exception Class
// In this example, we define a custom exception class MyException that inherits from std::exception.
// The what method is overridden to provide a custom error message.
// An instance of MyException is thrown and caught, displaying the custom error message.



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
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
