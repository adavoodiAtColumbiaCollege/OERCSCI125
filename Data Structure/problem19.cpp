/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <queue>

// Problem: Demonstrating the usage of a circular queue.

class CircularQueue {
private:
    int* data;
    int size;
    int front;
    int rear;

public:
    CircularQueue(int capacity) {
        size = capacity + 1; // Extra space for empty/full condition
        data = new int[size];
        front = rear = 0;
    }

    ~CircularQueue() {
        delete[] data;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue." << std::endl;
            return;
        }
        data[rear] = value;
        rear = (rear + 1) % size;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return -1;
        }
        int value = data[front];
        front = (front + 1) % size;
        return value;
    }

    bool isEmpty() const {
        return front == rear;
    }

    bool isFull() const {
        return (rear + 1) % size == front;
    }
};

int main() {
    CircularQueue queue(3);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4); // Should display "Queue is full. Cannot enqueue."

    std::cout << "Dequeue: " << queue.dequeue() << std::endl;
    std::cout << "Dequeue: " << queue.dequeue() << std::endl;
    std::cout << "Dequeue: " << queue.dequeue() << std::endl;
    std::cout << "Dequeue: " << queue.dequeue() << std::endl; // Should display "Queue is empty. Cannot dequeue."

    // Testing Scenario:
    // 1. Create a circular queue with a specified capacity.
    // 2. Enqueue and dequeue elements from the queue.
    // 3. Verify empty and full conditions.

    return 0;
}
