/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Function to Calculate the Factorial of a Number
// The calculateFactorial function takes an integer as a parameter and calculates its factorial.
// The testCalculateFactorial function is introduced to test the calculateFactorial function. It takes an integer as a parameter, calls the calculateFactorial function, and displays the factorial.
// Inside the main function, a number (number) is declared and assigned a value.
// The testCalculateFactorial function is called with the number to calculate its factorial.
// Test case:
// Input: number = 5
// Expected output: Factorial of 5 is: 120

#include <iostream>

// Function to calculate the factorial of a number
int calculateFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

// Test function for calculateFactorial
void testCalculateFactorial(int number) {
    int result = calculateFactorial(number);
    std::cout << "Factorial of " << number << " is: " << result << std::endl;
}

int main() {
    int number = 5;

    // Call the testCalculateFactorial function
    testCalculateFactorial(number);

    return 0;
}
