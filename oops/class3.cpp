#include <iostream>
using namespace std;
class Student
{
public:
    int marks;
};
Student createStudent()
{
    Student s;
    s.marks = 95;
    return s;
}
int main()
{
    Student student1;
    student1 = createStudent();
    cout << "Marks = " << student1.marks << endl;
    return 0;
}