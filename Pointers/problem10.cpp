/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

// Access and modify members of a structure using pointers.
// Expected result: Modified values of structure members.
struct MyStruct {
    int x;
    float y;
};
int main() {
    MyStruct obj = {10, 3.14f};
    MyStruct *ptr = &obj;
    ptr->x = 20;
    ptr->y = 6.28f;
    std::cout << ptr->x << ' ' << ptr->y << std::endl;
}
