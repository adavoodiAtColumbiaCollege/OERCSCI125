/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>

class ClassB; // Forward declaration

class ClassA {
    int valueA;
public:
    ClassA() : valueA(5) {}
    friend void showValue(ClassA, ClassB);
};

class ClassB {
    int valueB;
public:
    ClassB() : valueB(10) {}
    friend void showValue(ClassA, ClassB);
};

void showValue(ClassA a, ClassB b) {
    cout << "ValueA + ValueB: " << a.valueA + b.valueB << endl;
}

int main() {
    ClassA a;
    ClassB b;
    showValue(a, b);
    return 0;
}
