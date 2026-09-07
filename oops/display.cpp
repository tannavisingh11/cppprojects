#include <iostream>
using namespace std;
class Student
{
public:
    int marks;
    void display()
    {
        cout << "Marks = " << marks << endl;
    }
};
void show(Student s)
{
    cout << "Student Marks = " << s.marks << endl;
}
int main()
{
    Student s1;
    s1.marks = 85;
    show(s1);
    return 0;
}