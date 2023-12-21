/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Merge two sorted arrays.
// Expected Result: A single sorted array that merges both.
// Problem: Merge two sorted arrays into a single sorted array.
// Expected Result: A single sorted array that combines both input arrays.

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1 + n2];

    int i = 0, j = 0, k = 0;

    // Merging the two arrays
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // Adding remaining elements of arr1
    while (i < n1) {
        arr3[k++] = arr1[i++];
    }

    // Adding remaining elements of arr2
    while (j < n2) {
        arr3[k++] = arr2[j++];
    }

    // Display the merged array
    for (int i = 0; i < n1 + n2; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
