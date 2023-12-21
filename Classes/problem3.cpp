/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College
Note: Date: Summer 2023
*/

#include <iostream>

#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    string author;
public:
    Book(string t, string a) : title(t), author(a) {}
    void getInfo() { cout << title << " by " << author << endl; }
};

int main() {
    Book myBook("1984", "George Orwell");
    myBook.getInfo();
    return 0;
}
