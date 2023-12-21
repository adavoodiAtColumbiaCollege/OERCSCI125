/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>

#include <iostream>
using namespace std;

class Timer {
    int hours, minutes, seconds;
public:
    Timer(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
    void displayTime() { cout << hours << ":" << minutes << ":" << seconds << endl; }
};

int main() {
    Timer myTimer(2, 30, 45);
    myTimer.displayTime();
    return 0;
}
