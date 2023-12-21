/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Problem: Multiply two matrices.
// Expected Result: Product of the two matrices.
// Problem: Multiply two matrices.
// Expected Result: Product of the two matrices.


int main() {
    int mat1[2][2] = { {1, 2}, {3, 4} };
    int mat2[2][2] = { {2, 0}, {1, 2} };
    int res[2][2] = {0};

    // Performing matrix multiplication
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            res[i][j] = 0;
            for(int k = 0; k < 2; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    // Display the resulting matrix
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            std::cout << res[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
