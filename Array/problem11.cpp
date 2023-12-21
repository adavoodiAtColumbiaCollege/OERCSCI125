/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>


// Problem: Find the largest element in an array.
// Expected Result: The largest element in the array.
int main() {
    int arr[] = {1, 45, 23, 87, 5};
    int max = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) max = arr[i];
    }
    std::cout << "Max: " << max << std::endl;
}
