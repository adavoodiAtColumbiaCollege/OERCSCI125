/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/


#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    // Overloading the less-than operator
    bool operator<(const Time& other) const {
        if (hours < other.hours) {
            return true;
        } else if (hours == other.hours && minutes < other.minutes) {
            return true;
        }
        return false;
    }
};

int main() {
    Time time1(10, 30);
    Time time2(12, 15);

    if (time1 < time2) {
        std::cout << "time1 is earlier than time2." << std::endl;
    } else {
        std::cout << "time1 is not earlier than time2." << std::endl;
    }

    return 0;
}
