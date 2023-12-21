/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Class Template
// In this example, we define a class template Container that can store a value of any type T.
// We create instances of the class template with different types and access the stored values using class methods.
//

#include <iostream>

// Class template for a simple container
template <typename T>
class Container {
private:
    T value;

public:
    Container(T val) : value(val) {}

    T getValue() const {
        return value;
    }
};

int main() {
    // Create instances of the class template with different types
    Container<int> intContainer(42);
    Container<double> doubleContainer(3.14);

    // Access values using class methods
    std::cout << "Integer Container: " << intContainer.getValue() << std::endl;
    std::cout << "Double Container: " << doubleContainer.getValue() << std::endl;

    return 0;
}
