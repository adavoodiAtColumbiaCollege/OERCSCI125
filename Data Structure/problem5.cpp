/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: June 2023
*/

#include <iostream>
#include <queue>

// Problem: Demonstrating the usage of a queue data structure.

int main() {
    // Create a queue of strings
    std::queue<std::string> messageQueue;

    // Enqueue (push) elements into the queue
    messageQueue.push("Hello");
    messageQueue.push("World");
    messageQueue.push("!");

    // Dequeue (pop) and display elements from the queue
    std::cout << "Queue Contents: ";
    while (!messageQueue.empty()) {
        std::cout << messageQueue.front() << " ";
        messageQueue.pop();
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create an empty queue.
    // 2. Enqueue strings "Hello", "World", and "!" into the queue.
    // 3. Dequeue and display elements from the queue.

    return 0;
}
