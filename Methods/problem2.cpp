/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Function to Find the Maximum of Two Numbers
// The findMax function takes two integers as parameters and returns the maximum of the two numbers.
// The testFindMax function is introduced to test the findMax function. It takes two integers as parameters, calls the findMax function, and displays the maximum value.
// Inside the main function, two numbers (num1 and num2) are declared and assigned values.
// The testFindMax function is called twice with different test cases to demonstrate the functionality of the findMax function.
// Test case 1:
// Input: num1 = 10, num2 = 7
// Expected output: Maximum of 10 and 7 is: 10
// Test case 2:
// Input: num1 = 20, num2 = 15
// Expected output: Maximum of 20 and 15 is: 20
//

#include <iostream>

// Function to find the maximum of two numbers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Test function for findMax
void testFindMax(int num1, int num2) {
    int max = findMax(num1, num2);
    std::cout << "Maximum of " << num1 << " and " << num2 << " is: " << max << std::endl;
}

int main() {
    int num1 = 10, num2 = 7;

    // Call the testFindMax function with test case 1
    testFindMax(num1, num2);

    // Call the testFindMax function with test case 2
    testFindMax(20, 15);

    return 0;
}
