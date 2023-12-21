/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <queue>
#include <string>

// Problem: Demonstrating the usage of a priority queue with a custom comparator.

struct Person {
    std::string name;
    int age;

    Person(const std::string& n, int a) : name(n), age(a) {}
};

struct ComparePersons {
    bool operator()(const Person& p1, const Person& p2) const {
        // Compare persons based on age in descending order
        return p1.age > p2.age;
    }
};

int main() {
    std::priority_queue<Person, std::vector<Person>, ComparePersons> peopleQueue;

    peopleQueue.push(Person("Alice", 30));
    peopleQueue.push(Person("Bob", 25));
    peopleQueue.push(Person("Charlie", 35));

    std::cout << "Priority Queue Contents (Custom Comparator):" << std::endl;
    while (!peopleQueue.empty()) {
        Person person = peopleQueue.top();
        peopleQueue.pop();
        std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    }

    // Testing Scenario:
    // 1. Create a priority queue with a custom comparator.
    // 2. Enqueue people with names and ages.
    // 3. Dequeue and display people based on their age in descending order.

    return 0;
}
