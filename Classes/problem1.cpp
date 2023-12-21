/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
    string model;
public:
    Car(string m) : model(m) {}
    void display() { cout << "Model: " << model << endl; }
};

int main() {
    Car myCar("Toyota Camry");
    myCar.display();
    return 0;
}
