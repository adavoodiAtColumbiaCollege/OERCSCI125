/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/

#include <iostream>

//Function to Check if a Number is Prime
// The checkPrime function takes an integer as a parameter and checks if it is a prime number.
// The testCheckPrime function is introduced to test the checkPrime function. It takes an integer as a parameter, calls the checkPrime function, and displays whether the number is prime or not.
// Inside the main function, a number (number) is declared and assigned a value.
// The testCheckPrime function is called with the number to determine if it is prime.
// Test case:
// Input: number = 17
// Expected output: 17 is prime.


// Function to check if a number is prime
bool checkPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Test function for checkPrime
void testCheckPrime(int number) {
    bool isPrime = checkPrime(number);
    if (isPrime) {
        std::cout << number << " is prime." << std::endl;
    } else {
        std::cout << number << " is not prime." << std::endl;
    }
}

int main() {
    int number = 17;

    // Call the testCheckPrime function
    testCheckPrime(number);

    return 0;
}
