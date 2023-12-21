/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Function to Calculate the Sum of Digits in a Number
// The calculateSumOfDigits function takes an integer as a parameter and calculates the sum of its digits.
// The testCalculateSumOfDigits function is introduced to test the calculateSumOfDigits function. It takes an integer as a parameter, calls the calculateSumOfDigits function, and displays the sum of the digits.
// Inside the main function, a number (number) is declared and assigned a value.
// The testCalculateSumOfDigits function is called with the number to calculate the sum of its digits.

#include <iostream>

// Function to calculate the sum of digits in a number
int calculateSumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

// Test function for calculateSumOfDigits
void testCalculateSumOfDigits(int number) {
    int result = calculateSumOfDigits(number);
    std::cout << "Sum of digits in " << number << " is: " << result << std::endl;
}

int main() {
    int number = 12345;

    // Call the testCalculateSumOfDigits function
    testCalculateSumOfDigits(number);

    return 0;
}
