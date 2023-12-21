/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Function to Add Two Numbers
// The add function takes two integers as parameters and returns their sum.
// The testAdd function is introduced to test the add function. It takes two integers as parameters, calls the add function, and displays the sum.
// Inside the main function, two numbers (num1 and num2) are declared and assigned values.
// The testAdd function is called twice with different test cases to demonstrate the functionality of the add function.
// Test case 1:
// Input: num1 = 5, num2 = 7
// Expected output: Sum of 5 and 7 is: 12
// Test case 2:
// Input: num1 = 10, num2 = 15
// Expected output: Sum of 10 and 15 is: 25

#include <iostream>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Test function for add
void testAdd(int num1, int num2) {
    int sum = add(num1, num2);
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
}

int main() {
    int num1 = 5, num2 = 7;

    // Call the testAdd function with test case 1
    testAdd(num1, num2);

    // Call the testAdd function with test case 2
    testAdd(10, 15);

    return 0;
}
