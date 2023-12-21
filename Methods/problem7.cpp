/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Function to Calculate the Power of a Number
// The calculatePower function takes two integers as parameters, base and exponent, and calculates the power of the base raised to the exponent.
// The testCalculatePower function is introduced to test the calculatePower function. It takes two integers as parameters, calls the calculatePower function, and displays the result.
// Inside the main function, a base (base) and an exponent (exponent) are declared and assigned values.
// The testCalculatePower function is called with the base and exponent to calculate the power.
// Test case:
// Input: base = 2, exponent = 5
// Expected output: 2 raised to the power of 5 is: 32

#include <iostream>

// Function to calculate the power of a number
int calculatePower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Test function for calculatePower
void testCalculatePower(int base, int exponent) {
    int result = calculatePower(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;
}

int main() {
    int base = 2, exponent = 5;

    // Call the testCalculatePower function
    testCalculatePower(base, exponent);

    return 0;
}
