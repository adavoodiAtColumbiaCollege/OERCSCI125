/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Reverse an integer using call-by-reference.
// Expected Result: The reversed integer.
void reverseInt(int &num) {
    int reversed = 0;
    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    num = reversed;
}
int main() {
    int num = 1234;
    reverseInt(num);
    // Output: num = 4321
}
