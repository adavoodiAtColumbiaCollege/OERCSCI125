/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>

#include <iostream>
#include <string>
using namespace std;

class Account {
    string owner;
    double balance;
public:
    Account(string o, double b) : owner(o), balance(b) {}
    void showBalance() { cout << "Balance: " << balance << endl; }
};

int main() {
    Account acc("Bob", 1000.75);
    acc.showBalance();
    return 0;
}
