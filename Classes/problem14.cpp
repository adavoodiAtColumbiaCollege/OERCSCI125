/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/
#include <iostream>
#include <string>
using namespace std;

class Smartphone {
    string model;
    int batteryCapacity;
public:
    Smartphone(string m, int b) : model(m), batteryCapacity(b) {}
    void features() { cout << "Smartphone Model: " << model << ", Battery: " << batteryCapacity << "mAh" << endl; }
};

int main() {
    Smartphone myPhone("Galaxy S21", 4000);
    myPhone.features();
    return 0;
}
