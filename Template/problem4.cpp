/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


//Class Template with Multiple Types
// In this example, we define a class template Pair that represents a pair of values with different types T and U.
// We create instances of the class template with different types and access the values using class methods.

#include <iostream>

// Class template for a pair of values with different types
template <typename T, typename U>
class Pair {
private:
    T first;
    U second;

public:
    Pair(T f, U s) : first(f), second(s) {}

    T getFirst() const {
        return first;
    }

    U getSecond() const {
        return second;
    }
};

int main() {
    // Create instances of the class template with different types
    Pair<int, double> pair1(42, 3.14);
    Pair<std::string, char> pair2("Hello", 'C');

    // Access values using class methods
    std::cout << "Pair 1: First = " << pair1.getFirst() << ", Second = " << pair1.getSecond() << std::endl;
    std::cout << "Pair 2: First = " << pair2.getFirst() << ", Second = " << pair2.getSecond() << std::endl;

    return 0;
}
