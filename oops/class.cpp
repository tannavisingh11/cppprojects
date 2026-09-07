#include <iostream>
using namespace std;
class Student
{
public:
    int marks;
};
int totalMarks(Student s1, Student s2)
{
    return s1.marks + s2.marks;
}
int main()
{
    Student student1, student2;
    student1.marks = 80;
    student2.marks = 90;
    int total = totalMarks(student1, student2);
    cout << "Total Marks = " << total << endl;
    return 0;
}