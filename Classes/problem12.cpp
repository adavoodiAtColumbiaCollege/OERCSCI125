/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
using namespace std;

class Bicycle {
    int gear;
    string color;
public:
    Bicycle(int g, string c) : gear(g), color(c) {}
    void info() { cout << "Bicycle Gear: " << gear << ", Color: " << color << endl; }
};

int main() {
    Bicycle myBike(21, "Red");
    myBike.info();
    return 0;
}
