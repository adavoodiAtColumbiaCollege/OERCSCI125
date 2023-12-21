/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// 3. Arithmetic Operations
// This program performs basic arithmetic operations (+, -, *, /, %) on two numbers (a and b).
// It stores the results in separate variables (sum, difference, product, quotient, remainder).
// Finally, it displays the results.
// Test case:
// Expected output:
// -Sum: 8
// -Difference: 2
// -Product: 15
// -Quotient: 1
// -Remainder: 2

#include <iostream>

int main() {
    int a = 5, b = 3;
    // Perform arithmetic operations on a and b
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    // Display the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;
}
