/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Creating Nested Namespaces
// In this example, we define an outer namespace called Outer and a nested namespace called Inner.
// Each namespace has its own set of variables (x and y).
// In the main function, we access the variables by using the namespace qualifiers (Outer:: and Outer::Inner::).

#include <iostream>

// Outer namespace
namespace Outer {
    int x = 10;
    namespace Inner {
        int y = 20;
    }
}

int main() {
    // Accessing nested namespaces
    std::cout << "Outer x: " << Outer::x << std::endl;
    std::cout << "Inner y: " << Outer::Inner::y << std::endl;

    return 0;
}
