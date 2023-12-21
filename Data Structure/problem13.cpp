/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <queue>
#include <string>

// Problem: Demonstrating the usage of a priority queue for task scheduling.

struct Task {
    std::string name;
    int priority;

    Task(const std::string& n, int p) : name(n), priority(p) {}

    // Custom comparison operator for priority queue
    bool operator<(const Task& other) const {
        // Higher priority tasks come first
        return priority < other.priority;
    }
};

int main() {
    std::priority_queue<Task> taskQueue;

    // Enqueue tasks with different priorities
    taskQueue.push(Task("Task A", 3));
    taskQueue.push(Task("Task B", 1));
    taskQueue.push(Task("Task C", 2));

    // Dequeue and process tasks based on priority
    std::cout << "Task Execution Order: ";
    while (!taskQueue.empty()) {
        Task currentTask = taskQueue.top();
        taskQueue.pop();
        std::cout << currentTask.name << " ";
    }
    std::cout << std::endl;

    // Testing Scenario:
    // 1. Create a priority queue for task scheduling.
    // 2. Enqueue tasks with different priorities.
    // 3. Dequeue and process tasks in order of priority.

    return 0;
}
