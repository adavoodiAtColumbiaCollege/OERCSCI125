/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/

#include <iostream>
#include <stack>
#include <string>

// Problem: Demonstrating the usage of a stack to evaluate expressions.

int evaluateExpression(const std::string& expression) {
    std::stack<int> operandStack;
    std::stack<char> operatorStack;

    for (char ch : expression) {
        if (isdigit(ch)) {
            operandStack.push(ch - '0');
        } else if (ch == '+' || ch == '-') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                int operand2 = operandStack.top();
                operandStack.pop();
                int operand1 = operandStack.top();
                operandStack.pop();
                char op = operatorStack.top();
                operatorStack.pop();

                if (op == '+') {
                    operandStack.push(operand1 + operand2);
                } else {
                    operandStack.push(operand1 - operand2);
                }
            }
            operatorStack.push(ch);
        } else if (ch == '(') {
            operatorStack.push(ch);
        } else if (ch == ')') {
            while (operatorStack.top() != '(') {
                int operand2 = operandStack.top();
                operandStack.pop();
                int operand1 = operandStack.top();
                operandStack.pop();
                char op = operatorStack.top();
                operatorStack.pop();

                if (op == '+') {
                    operandStack.push(operand1 + operand2);
                } else {
                    operandStack.push(operand1 - operand2);
                }
            }
            operatorStack.pop(); // Remove the '('
        }
    }

    while (!operatorStack.empty()) {
        int operand2 = operandStack.top();
        operandStack.pop();
        int operand1 = operandStack.top();
        operandStack.pop();
        char op = operatorStack.top();
        operatorStack.pop();

        if (op == '+') {
            operandStack.push(operand1 + operand2);
        } else {
            operandStack.push(operand1 - operand2);
        }
    }

    return operandStack.top();
}

int main() {
    std::string expression = "(5+2)-(3-1)";
    int result = evaluateExpression(expression);
    std::cout << "Result of Expression: " << result << std::endl;

    // Testing Scenario:
    // 1. Define an expression as a string (e.g., "(5+2)-(3-1)").
    // 2. Use a stack to evaluate the expression and calculate the result.
    // 3. Display the result of the expression evaluation.

    return 0;
}
