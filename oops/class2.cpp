Program on Comparing Two Objects
#include <iostream>
using namespace std;
class Student
{
public:
    int marks;
    void compare(Student s)
    {
        if (marks > s.marks)
            cout << "First student has more marks";
        else
            cout << "Second student has more marks";
    }
};
int main()
{
    Student s1, s2;
    s1.marks = 80;
    s2.marks = 90;
    s1.compare(s2);
    return 0;
}