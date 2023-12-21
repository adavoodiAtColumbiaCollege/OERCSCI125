/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>

class SwapClass {
    int data;
public:
    SwapClass(int d) : data(d) {}
    friend void swap(SwapClass &, SwapClass &);
    void display() { cout << "Data: " << data << endl; }
};

void swap(SwapClass &x, SwapClass &y) {
    int temp = x.data;
    x.data = y.data;
    y.data = temp;
}

int main() {
    SwapClass obj1(100), obj2(200);
    swap(obj1, obj2);
    obj1.display();
    obj2.display();
    return 0;
}
