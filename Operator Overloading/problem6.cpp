/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/

//Overloading the Increment Operator (++)
// In this example, we define a Counter class that simulates a simple counter.
// We overload both the pre-increment (++counter) and post-increment (counter++) operators to increase the count.
// The getCount method returns the current count.
// In the main function, we demonstrate both pre-increment and post-increment operations on a Counter object.

#include <iostream>

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Overloading the pre-increment operator
    Counter& operator++() {
        ++count;
        return *this;
    }

    // Overloading the post-increment operator
    Counter operator++(int) {
        Counter temp(*this);
        ++count;
        return temp;
    }

    int getCount() const {
        return count;
    }
};

int main() {
    Counter counter;

    std::cout << "Initial Count: " << counter.getCount() << std::endl;

    // Using pre-increment operator
    ++counter;
    std::cout << "After Pre-Increment: " << counter.getCount() << std::endl;

    // Using post-increment operator
    counter++;
    std::cout << "After Post-Increment: " << counter.getCount() << std::endl;

    return 0;
}
