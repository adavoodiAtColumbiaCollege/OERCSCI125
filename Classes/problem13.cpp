/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <string>
using namespace std;

class Laptop {
    string brand;
    double screenSize;
public:
    Laptop(string b, double s) : brand(b), screenSize(s) {}
    void specs() { cout << "Laptop Brand: " << brand << ", Screen Size: " << screenSize << '"' << endl; }
};

int main() {
    Laptop myLaptop("Asus", 15.6);
    myLaptop.specs();
    return 0;
}
