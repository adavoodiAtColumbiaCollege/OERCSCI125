/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

//Overloading the Equality Operator (==)
// In this example, we define a Date class to represent a date.
// We overload the equality operator == to compare two Date objects for equality.
// In the main function, we create two Date objects (date1 and date2) and use the overloaded == operator to check if they are equal.

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Overloading the equality operator
    bool operator==(const Date& other) const {
        return (day == other.day) && (month == other.month) && (year == other.year);
    }
};

int main() {
    Date date1(10, 6, 2023);
    Date date2(10, 6, 2023);

    if (date1 == date2) {
        std::cout << "Dates are equal." << std::endl;
    } else {
        std::cout << "Dates are not equal." << std::endl;
    }

    return 0;
}
