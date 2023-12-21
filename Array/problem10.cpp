/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Search for an element in an array.
// Expected Result: Index of the element if found, or -1.
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    int index = -1;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == target) {
            index = i;
            break;
        }
    }
    std::cout << "Index: " << index << std::endl;
}
