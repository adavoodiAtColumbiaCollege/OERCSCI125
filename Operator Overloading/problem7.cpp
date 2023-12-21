/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/

//Overloading the Assignment Operator (=)
// In this example, we define a MyString class to represent a dynamic C-style string.
// We overload the assignment operator (=) to enable copying of one MyString object to another.
// The c_str method returns the C-style string.
// In the main function, we demonstrate using the overloaded assignment operator to copy the contents of one MyString object to another.

#include <iostream>

class MyString {
private:
    char* str;

public:
    MyString(const char* s = nullptr) {
        if (s == nullptr) {
            str = nullptr;
        } else {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
    }

    // Overloading the assignment operator
    MyString& operator=(const MyString& other) {
        if (this == &other) {
            return *this; // Self-assignment, no action needed
        }

        // Clean up current resources
        delete[] str;

        // Copy data from other object
        if (other.str == nullptr) {
            str = nullptr;
        } else {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }

        return *this;
    }

    const char* c_str() const {
        return str;
    }

    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2("World");

    std::cout << "Initial str1: " << str1.c_str() << std::endl;
    std::cout << "Initial str2: " << str2.c_str() << std::endl;

    str1 = str2; // Using the overloaded assignment operator

    std::cout << "After Assignment:" << std::endl;
    std::cout << "str1: " << str1.c_str() << std::endl;
    std::cout << "str2: " << str2.c_str() << std::endl;

    return 0;
}
