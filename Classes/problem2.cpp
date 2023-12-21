/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>


#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void greet() { cout << "Hello, I am " << name << endl; }
};

int main() {
    Person alice("Alice", 30);
    alice.greet();
    return 0;
}
