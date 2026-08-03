#include <bits/stdc++.h>
#include <stack>
using namespace std;

int precedence(char op)
{
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}

int main()
{
    string infix;
    string postfix = "";
    stack<char> st;

    cout << "Enter infix expression: ";
    cin >> infix;

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        // Operand
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'))
        {
            postfix += ch;
        }

        // Left Parenthesis
        else if (ch == '(')
        {
            st.push(ch);
        }

        // Right Parenthesis
        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }

            if (!st.empty())
                st.pop(); // Remove '('
        }

        // Operator
        else
        {
            while (!st.empty() && precedence(st.top()) >= precedence(ch))
            {
                postfix += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    // Pop remaining operators
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}