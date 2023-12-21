/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Overloading the Addition Operator (+)

// In this example, we define a Complex class to represent complex numbers.
// We overload the addition operator + to add two complex numbers.
// The display method is used to print complex numbers.
// In the main function, we create two complex numbers (num1 and num2) and add them using the overloaded + operator.


#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Overloading the addition operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Display the complex number
    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    Complex sum = num1 + num2;

    std::cout << "Sum: ";
    sum.display();

    return 0;
}
