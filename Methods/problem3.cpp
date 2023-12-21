/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Function to Check if a Number is Even or Odd
// The checkEvenOdd function takes an integer as a parameter and checks if it is even or odd.
// The testCheckEvenOdd function is introduced to test the checkEvenOdd function. It takes an integer as a parameter and calls the checkEvenOdd function.
// Inside the main function, a number (number) is declared and assigned a value.
// The testCheckEvenOdd function is called with the number to determine if it is even or odd.
// Test case:
// Input: number = 7
// Expected output: 7 is odd.

#include <iostream>

// Function to check if a number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        std::cout << num << " is even." << std::endl;
    } else {
        std::cout << num << " is odd." << std::endl;
    }
}

// Test function for checkEvenOdd
void testCheckEvenOdd(int number) {
    checkEvenOdd(number);
}

int main() {
    int number = 7;

    // Call the testCheckEvenOdd function
    testCheckEvenOdd(number);

    return 0;
}
