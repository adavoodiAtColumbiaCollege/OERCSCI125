/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Exception Safety with Resource Management
// In this example, we demonstrate exception safety with resource management using RAII (Resource Acquisition Is Initialization).
// The writeFile function opens a file and writes data to it. If the file cannot be opened, it throws an exception.
// The file is automatically closed when the file object goes out of scope, ensuring proper resource cleanup.


#include <iostream>
#include <fstream>
#include <stdexcept>

void writeFile() {
    std::ofstream file("data.txt");
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file");
    }

    file << "Hello, C++!" << std::endl;
    // The file is automatically closed when 'file' goes out of scope
}

int main() {
    try {
        writeFile();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
