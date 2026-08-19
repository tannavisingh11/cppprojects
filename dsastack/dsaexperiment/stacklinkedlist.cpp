#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        Node* newNode = new Node();

        newNode->data = value;
        newNode->next = top;
        top = newNode;

        cout << value << " pushed into stack." << endl;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow!" << endl;
        } else {
            Node* temp = top;
            cout << top->data << " popped from stack." << endl;
            top = top->next;
            delete temp;
        }
    }

    void peek() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element: " << top->data << endl;
        }
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
        } else {
            Node* temp = top;

            cout << "Stack elements: ";
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- STACK USING LINKED LIST ---\n";
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