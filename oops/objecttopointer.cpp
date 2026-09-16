#include <iostream>
using namespace std;

class Student {
    int id;

public:
       Student() {
        static int count = 0;
        id = ++count;
        cout << "Constructor called for Student " << id << endl;
    }
    ~Student() {
        cout << "Destructor called for Student " << id << endl;
    }

    void display() {
        cout << "Student ID: " << id << endl;
    }
};

int main() {

    cout << "Creating array of objects..." << endl;
    Student* students = new Student[3];

    cout << "\nObject addresses:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1
             << " address = " << &students[i] << endl;
    }

    cout << "\nDeleting array..." << endl;
    delete[] students;

    students = nullptr;

    cout << "\nMemory released safely." << endl;

    return 0;
}