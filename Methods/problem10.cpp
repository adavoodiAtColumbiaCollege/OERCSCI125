/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Function to Calculate the Fibonacci Sequence
// The calculateFibonacci function takes an integer n as a parameter and calculates the nth Fibonacci number.
// The testCalculateFibonacci function is introduced to test the calculateFibonacci function. It takes an integer n as a parameter, calls the calculateFibonacci function, and displays the nth Fibonacci number.
// Inside the main function, a position (position) is declared and assigned a value.
// The testCalculateFibonacci function is called with the position to calculate the nth Fibonacci number.
// Test case:
// Input: position = 7
// Expected output: Fibonacci number at position 7 is: 13

#include <iostream>

// Function to calculate the nth Fibonacci number
int calculateFibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int prev = 0, current = 1, next;
    for (int i = 2; i <= n; i++) {
        next = prev + current;
        prev = current;
        current = next;
    }
    return current;
}

// Test function for calculateFibonacci
void testCalculateFibonacci(int n) {
    int result = calculateFibonacci(n);
    std::cout << "Fibonacci number at position " << n << " is: " << result << std::endl;
}

int main() {
    int position = 7;

    // Call the testCalculateFibonacci function
    testCalculateFibonacci(position);

    return 0;
}
