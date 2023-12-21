/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <list>

// Problem: Demonstrating the usage of a doubly linked list.

int main() {
    // Create a doubly linked list of integers
    std::list<int> doublyLinkedList;

    // Add elements to the list
    doublyLinkedList.push_back(1);
    doublyLinkedList.push_front(0);
    doublyLinkedList.push_back(2);

    // Display the contents of the list
    std::cout << "Doubly Linked List Contents: ";
    for (int num : doublyLinkedList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create an empty doubly linked list.
    // 2. Add integers 0, 1, and 2 to the list.
    // 3. Display the contents of the list.

    return 0;
}
