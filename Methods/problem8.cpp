/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Function to Reverse a Number
// The reverseNumber function takes an integer as a parameter and reverses its digits.
// The testReverseNumber function is introduced to test the reverseNumber function. It takes an integer as a parameter, calls the reverseNumber function, and displays the reversed number.
// Inside the main function, a number (number) is declared and assigned a value.
// The testReverseNumber function is called with the number to reverse it.
// Test case:
// Input: number = 12345
// Expected output: Reverse of 12345 is: 54321


#include <iostream>

// Function to reverse a number
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = (reversedNum * 10) + digit;
        num /= 10;
    }
    return reversedNum;
}

// Test function for reverseNumber
void testReverseNumber(int number) {
    int result = reverseNumber(number);
    std::cout << "Reverse of " << number << " is: " << result << std::endl;
}

int main() {
    int number = 12345;

    // Call the testReverseNumber function
    testReverseNumber(number);

    return 0;
}
