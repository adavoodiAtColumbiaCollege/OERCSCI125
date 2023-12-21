/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Aliasing a Namespace
// In this example, we have a namespace with a long name, VeryLongNamespaceName.
// We create an alias for the namespace using the namespace aliasing syntax (namespace VLN = VeryLongNamespaceName;).
// In the main function, we access the namespace using the alias VLN:: instead of the full namespace name.

#include <iostream>

// Define a long namespace name
namespace VeryLongNamespaceName {
    int value = 42;
}

// Alias the namespace with a shorter name
namespace VLN = VeryLongNamespaceName;

int main() {
    // Access the namespace using the alias
    std::cout << "Value: " << VLN::value << std::endl;

    return 0;
}
