/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>

class Distance {
    int meter;
public:
    Distance() : meter(0) {}
    friend int addFive(Distance);
};

int addFive(Distance d) {
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance: " << addFive(D) << endl;
    return 0;
}
