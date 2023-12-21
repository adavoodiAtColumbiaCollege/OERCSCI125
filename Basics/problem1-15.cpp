/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: This program is generated and tested by Alireza Davoodi
Note: Date: June 2023
*/

// Problem1-15:Simple Calculator
// This program acts as a simple calculator that performs arithmetic operations on two numbers.
// It prompts the user to enter an expression in the format number1 operator number2 (e.g., 5 + 3).
// It reads the input expression and separates the numbers and operator.
// Based on the operator (+, -, *, /), it performs the corresponding arithmetic operation using a switch statement.
// The result is stored in the result variable.
// Finally, it displays the result.
// Test case:
// Input: 7 * 3
// Expected output: Result: 21.

#include <iostream>

int main() {
    double num1, num2;
    char op;
    // Prompt the user to enter an expression
    std::cout << "Enter an expression (e.g., 5 + 3): ";
    // Read the input expression from the user
    std::cin >> num1 >> op >> num2;

    double result;
    // Perform the arithmetic operation based on the operator
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
            return 1;  // Exit the program with an error code
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}

