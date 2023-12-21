/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Function Template with Multiple Types
// In this example, we define a function template swapValues that can swap values of different types T and U.
// We demonstrate the use of the function template to swap an integer and a double.


#include <iostream>

// Function template to swap two values of different types
template <typename T, typename U>
void swapValues(T& a, U& b) {
    T temp = a;
    a = static_cast<T>(b);
    b = static_cast<U>(temp);
}

int main() {
    int num1 = 42;
    double num2 = 3.14;

    // Use the function template to swap values of different types
    std::cout << "Before Swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swapValues(num1, num2);
    std::cout << "After Swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
