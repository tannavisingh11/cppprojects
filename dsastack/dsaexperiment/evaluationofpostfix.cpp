#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int applyOperation(int a, int b, char op) {
    switch (op) {
    case '+':
        return a + b;

    case '-':
        return a - b;

    case '*':
        return a * b;

    case '/':
        return a / b;

    case '^':
        return pow(a, b);

    default:
        return 0;
    }
}

int evaluatePostfix(string postfix) {
    stack<int> s;

    for (char ch : postfix) {

        if (isdigit(ch)) {
            s.push(ch - '0');
        }

        else {
            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            int result = applyOperation(a, b, ch);

            s.push(result);
        }
    }

    return s.top();
}

int main() {
    string postfix;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    cout << "Result: "
         << evaluatePostfix(postfix) << endl;

    return 0;
}