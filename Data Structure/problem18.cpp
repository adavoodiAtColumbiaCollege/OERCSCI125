/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <stack>
#include <string>

// Problem: Demonstrating the usage of a stack to validate expressions.

bool isValidExpression(const std::string& expression) {
    std::stack<char> charStack;

    for (char ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
            charStack.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (charStack.empty()) {
                return false;
            }
            char topChar = charStack.top();
            charStack.pop();
            if ((ch == ')' && topChar != '(') || (ch == ']' && topChar != '[') || (ch == '}' && topChar != '{')) {
                return false;
            }
        }
    }

    return charStack.empty();
}

int main() {
    std::string expression1 = "{[()]()}";
    std::string expression2 = "{[()()]";

    if (isValidExpression(expression1)) {
        std::cout << "Expression 1 is Valid." << std::endl;
    } else {
        std::cout << "Expression 1 is Invalid." << std::endl;
    }

    if (isValidExpression(expression2)) {
        std::cout << "Expression 2 is Valid." << std::endl;
    } else {
        std::cout << "Expression 2 is Invalid." << std::endl;
    }

    // Testing Scenario:
    // 1. Define two expressions as strings (one valid, one invalid).
    // 2. Use a stack to validate each expression and display the result.

    return 0;
}
