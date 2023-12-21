/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: June 2023
*/

#include <iostream>

// Problem: Double the values of all elements in an array using call-by-reference.
// Expected Result: Each element in the array is doubled.
void doubleArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    doubleArray(arr, size);
    // Output: arr = {2, 4, 6, 8, 10}
}
