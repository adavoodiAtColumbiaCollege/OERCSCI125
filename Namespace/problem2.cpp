/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Using using Directive
// In this example, we define the same custom namespace MyNamespace.
// We use the using directive to bring all members of MyNamespace into the current scope.
// In the main function, we can access the namespace members directly without using the namespace prefix.

#include <iostream>

// Define a custom namespace
namespace MyNamespace {
    int x = 10;
    void display() {
        std::cout << "Value of x: " << x << std::endl;
    }
}

// Use the 'using' directive to avoid explicit namespace prefixes
using namespace MyNamespace;

int main() {
    // Accessing namespace members without prefix
    display();

    return 0;
}
