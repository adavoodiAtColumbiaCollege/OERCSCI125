/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/

//Function Template with Default Template Arguments
// In this example, we define a function template add with a default template argument of int.
// We demonstrate the use of the function template with and without specifying template arguments, allowing for flexibility in the types of values that can be added.
// These examples showcase various uses of templates in C++, including function templates, class templates, templates with multiple types, and templates with default template arguments. Templates provide a powerful way to write generic code that can work with different types.


#include <iostream>

// Function template with default template argument
template <typename T = int>
T add(T a, T b) {
    return a + b;
}

int main() {
    int num1 = 5;
    double num2 = 3.14;

    // Use the function template with and without specifying template arguments
    std::cout << "Sum (int): " << add(num1, num1) << std::endl;
    std::cout << "Sum (double): " << add(num2, num2) << std::endl;

    return 0;
}
