/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/

//Overloading the Array Subscript Operator ([])

#include <iostream>

class MyArray {
private:
    int data[5];

public:
    MyArray() {
        for (int i = 0; i < 5; ++i) {
            data[i] = i * 2;
        }
    }

    // Overloading the array subscript operator
    int operator[](int index) const {
        if (index >= 0 && index < 5) {
            return data[index];
        } else {
            std::cout << "Index out of bounds!" << std::endl;
            return -1; // Return a default value for out-of-bounds indices
        }
    }
};

int main() {
    MyArray arr;

    // Access elements using the overloaded [] operator
    for (int i = 0; i < 7; ++i) {
        int value = arr[i];
        if (value != -1) {
            std::cout << "arr[" << i << "] = " << value << std::endl;
        }
    }

    return 0;
}
