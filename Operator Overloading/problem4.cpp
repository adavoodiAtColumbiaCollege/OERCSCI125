/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Overloading the Unary Minus Operator (-)
// In this example, we define a Complex class to represent complex numbers.
// We overload the unary minus operator - to negate a complex number.
// The display method is used to print complex numbers.
// In the main function, we create a complex number (num) and negate it using the overloaded - operator.

#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Overloading the unary minus operator
    Complex operator-() const {
        return Complex(-real, -imag);
    }

    // Display the complex number
    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex num(3.0, 4.0);

    Complex negated = -num;

    std::cout << "Negation: ";
    negated.display();

    return 0;
}
