#include <iostream>
using namespace std;

#define MAX 5

class Stack {
    int stack[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            stack[++top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << stack[top--] << " popped from stack." << endl;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element: " << stack[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- STACK USING ARRAY ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout << "Program terminated." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}