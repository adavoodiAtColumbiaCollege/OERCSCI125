/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/


#include <iostream>
#include <map>

// Problem: Demonstrating the usage of a map container to store key-value pairs.

int main() {
    // Create a map of country-capital pairs
    std::map<std::string, std::string> countryCapitalMap;

    // Add key-value pairs to the map
    countryCapitalMap["USA"] = "Washington, D.C.";
    countryCapitalMap["France"] = "Paris";
    countryCapitalMap["India"] = "New Delhi";

    // Display the contents of the map
    std::cout << "Country-Capital Map: " << std::endl;
    for (const auto& pair : countryCapitalMap) {
        std::cout << pair.first << " -> " << pair.second << std::endl;
    }

    // Testing Scenario:
    // 1. Create an empty map to store country-capital pairs.
    // 2. Add key-value pairs to the map.
    // 3. Display the key-value pairs in the map.

    return 0;
}
