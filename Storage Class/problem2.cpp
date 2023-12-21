/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Static variables maintain their value between function calls
void staticStorageExample() {
    static int count = 0;
    count++;
    std::cout << count << std::endl;
}
int main() {
    staticStorageExample(); // Each call will increment 'count'
    staticStorageExample();
}
