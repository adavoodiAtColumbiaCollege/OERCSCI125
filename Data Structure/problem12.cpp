/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


#include <iostream>
#include <queue>
#include <vector>

// Problem: Demonstrating the usage of a queue for breadth-first search (BFS).

// Graph represented as an adjacency list
std::vector<std::vector<int>> graph = {
    {1, 2},     // Node 0 is connected to nodes 1 and 2
    {0, 3, 4},  // Node 1 is connected to nodes 0, 3, and 4
    {0, 5},     // Node 2 is connected to nodes 0 and 5
    {1},        // Node 3 is connected to node 1
    {1},        // Node 4 is connected to node 1
    {2}         // Node 5 is connected to node 2
};

void bfs(int startNode) {
    std::vector<bool> visited(graph.size(), false);
    std::queue<int> nodeQueue;

    visited[startNode] = true;
    nodeQueue.push(startNode);

    std::cout << "Breadth-First Search: ";

    while (!nodeQueue.empty()) {
        int currentNode = nodeQueue.front();
        nodeQueue.pop();
        std::cout << currentNode << " ";

        for (int neighbor : graph[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                nodeQueue.push(neighbor);
            }
        }
    }

    std::cout << std::endl;
}

int main() {
    int startNode = 0;
    std::cout << "Starting Node for BFS: " << startNode << std::endl;
    bfs(startNode);

    // Testing Scenario:
    // 1. Define a graph as an adjacency list.
    // 2. Choose a starting node for breadth-first search (BFS).
    // 3. Perform BFS starting from the chosen node and display the visited nodes.

    return 0;
}
