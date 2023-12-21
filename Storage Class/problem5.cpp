/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: June 2023
*/

#include <iostream>

// Mutable variable in a const function
class MutableExample {
    mutable int mutableVar;
public:
    void setMutableVar(int value) const {
        mutableVar = value; // Allowed even in a const function
    }
};
int main() {
    MutableExample obj;
    obj.setMutableVar(10);
}
