/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Function Template
// In this example, we define a function template max that takes two values of the same type T and returns the maximum value.
// We demonstrate the use of the function template with both integer and double values.


#include <iostream>

// Function template to find the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 42;
    int num2 = 17;

    double num3 = 3.14;
    double num4 = 2.71;

    // Use the function template with different types
    std::cout << "Max of " << num1 << " and " << num2 << " is " << max(num1, num2) << std::endl;
    std::cout << "Max of " << num3 << " and " << num4 << " is " << max(num3, num4) << std::endl;

    return 0;
}
