/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


#include <iostream>
#include <stack>

// Problem: Demonstrating the usage of a stack data structure.

int main() {
    // Create a stack of integers
    std::stack<int> numberStack;

    // Push elements onto the stack
    numberStack.push(1);
    numberStack.push(2);
    numberStack.push(3);

    // Pop and display elements from the stack
    std::cout << "Stack Contents: ";
    while (!numberStack.empty()) {
        std::cout << numberStack.top() << " ";
        numberStack.pop();
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create an empty stack.
    // 2. Push integers 1, 2, and 3 onto the stack.
    // 3. Pop and display elements from the stack.

    return 0;
}
