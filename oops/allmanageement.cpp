#include <iostream>
using namespace std;

class Book {
private:
    string title;
    const int bookId;          // constant data member
    static int activeBooks;    // static data member

public:
    // Constructor
    Book(string t, const int id) : title(t), bookId(id) {
        activeBooks++;
        cout << "Book created: " << title << endl;
    }

    // Destructor
    ~Book() {
        activeBooks--;
        cout << "Book destroyed: " << title << endl;
    }

    // Static member function
    static void showActiveBooks() {
        cout << "Active books: " << activeBooks << endl;
    }

    // Constant member function
    void display() const {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
    }

    // Function with constant parameter
    void compareId(const int id) const {
        if (bookId == id)
            cout << "Book ID matches." << endl;
        else
            cout << "Book ID does not match." << endl;
    }

    // Non-constant member function
    void changeTitle(string newTitle) {
        title = newTitle;
    }
};

// Definition of static data member
int Book::activeBooks = 0;

int main() {

    Book b1("C++ Programming", 101);
    Book b2("Data Structures", 102);

    // Static function can be called using class name
    Book::showActiveBooks();

    cout << "\nBook 1 details:\n";
    b1.display();

    // Constant object
    const Book b3("Operating Systems", 103);

    cout << "\nConstant object details:\n";
    b3.display();

    // Constant parameter
    b1.compareId(101);

    cout << "\n";
    Book::showActiveBooks();

    return 0;
}