/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>

#include <iostream>
#include <string>
using namespace std;

class Computer {
    string brand;
    string processor;
public:
    Computer(string b, string p) : brand(b), processor(p) {}
    void specs() { cout << "Brand: " << brand << ", Processor: " << processor << endl; }
};

int main() {
    Computer myComputer("Dell", "Intel i7");
    myComputer.specs();
    return 0;
}
