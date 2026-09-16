#include <iostream>
using namespace std;
class Student {
private:
    int rollNo;
    float marks;
protected:
    string name;
public:
    void setData(int r, string n, float m);
    void displayData();
    inline float getMarks();
};
class StudentInfo : public Student {
public:
    void showStudent();
};
void Student::setData(int r, string n, float m) {
    rollNo = r;
    name = n;
    marks = m;
}
void Student::displayData() {
    cout << "Roll No: " << rollNo << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}
inline float Student::getMarks() {
    return marks;
}
void StudentInfo::showStudent() {
    cout << "Student Name: " << name << endl;
}
int main() {
    StudentInfo s;
    s.setData(101, "Tannavi", 89.5);
    s.displayData();
    cout << "Marks using inline function: " << s.getMarks() << endl;
    s.showStudent();
    return 0;
}