/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Function to Calculate the Square of a Number
// The calculateSquare function takes an integer as a parameter and calculates its square.
// The testCalculateSquare function is introduced to test the calculateSquare function. It takes an integer as a parameter, calls the calculateSquare function, and displays the square of the number.
// Inside the main function, a number (number) is declared and assigned a value.
// The testCalculateSquare function is called with the number to calculate its square.
// Test case:
// Input: number = 8
// Expected output: Square of 8 is: 64

#include <iostream>

// Function to calculate the square of a number
int calculateSquare(int num) {
    return num * num;
}

// Test function for calculateSquare
void testCalculateSquare(int number) {
    int result = calculateSquare(number);
    std::cout << "Square of " << number << " is: " << result << std::endl;
}

int main() {
    int number = 8;

    // Call the testCalculateSquare function
    testCalculateSquare(number);

    return 0;
}
