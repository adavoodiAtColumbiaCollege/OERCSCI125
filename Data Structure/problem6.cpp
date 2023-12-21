/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <queue>

// Problem: Demonstrating the usage of a priority queue data structure.

int main() {
    // Create a priority queue of integers (min heap by default)
    std::priority_queue<int> minHeap;

    // Enqueue elements into the priority queue
    minHeap.push(5);
    minHeap.push(2);
    minHeap.push(8);

    // Dequeue and display elements from the priority queue
    std::cout << "Priority Queue Contents (Min Heap): ";
    while (!minHeap.empty()) {
        std::cout << minHeap.top() << " ";
        minHeap.pop();
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create an empty priority queue (min heap by default).
    // 2. Enqueue integers 5, 2, and 8 into the priority queue.
    // 3. Dequeue and display elements from the priority queue (in ascending order).

    return 0;
}
