/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Creating and Using a Namespace
// In this example, we define a custom namespace called MyNamespace.
// Inside the namespace, we declare an integer variable x and a function display.
// In the main function, we access and use the namespace members by prefixing them with MyNamespace::.


#include <iostream>

// Define a custom namespace
namespace MyNamespace {
    int x = 10;
    void display() {
        std::cout << "Value of x: " << x << std::endl;
    }
}

int main() {
    // Accessing namespace members
    MyNamespace::display();

    return 0;
}
