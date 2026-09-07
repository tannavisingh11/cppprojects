/*create a class student with data members roll number,name and marks.
 create an object of the class ,accept values from the  user and display the complete student detailsusing member functions.*/
 #include <iostream>
using namespace std; 
class Student {
    private:   
    int rollNumber;
    string name;
    float marks;
    public:   
    void acceptDetails(){
        cout<<"enter roll number:"<<endl;
        cin>>rollNumber;
        cout<<"name:"<<endl;
        cin>>name;
        cout<<"marks:"<<endl;
        cin>>marks;
    }
    void displayDetails(){
        cout<<"Student Details:"<<endl;
        cout<<"rollNumber:"<<endl;
        cout<<"name:"<<endl;
        cout<<"marks:"<<endl;
    }

    };
    int main(){
        Student student;
        student.acceptDetails();
        student.displayDetails(); 
    return 0;
    }
  
 /* create a class employee with private data members employee id,name and salary.declare input() and display() member function inside the class
 but define both functions outside the class using the scope resolution operator create object and display the employee details*/
 #include<iostream>
 using namespace std;
 class employee{
    private:
    int ID;
    string name;
    float salary;
public:
void input();
void display();
 };
 void employee :: input(){
    cout<<"Enter employee ID:"<<endl;
    cin<<employee ID;
    cout<<"enter name:"<<endl:
    cin.ignore();
    getline(cin,name);

    cout<<"enter salary:"<<endl;
    cin>>salary;

 }
  void employee ::display(){
    cout<<"Enter employee details:"<<endl;
    cout<<"Enter employee ID:"<<employee ID<<endl;
    cout<<"Enter employee name:"<<name<<endl;
  }
  int main(){
    employee emp;
    emp.input();
    emp.display();
    return 0;
  }


//  /* create overload functions name area() to calculate the area of a square and a rectangle. also create a function simple interest() in which the rate
//  of interest is a default argument.call all functions from main() and display the result*/
 #include<iostream>
 using  namespace std;
float area(int a){
  return a*a;
  cin>>a;
 }
  float rectangle(int a ,int b){
    return a*b;
    cin>>a,b;
  }
 float simpleinterest(int p,int t ,int r){
   return (p*t*r)/100;

 }
 int main(){
    cout<<"area ofsquare="<< area(5)<<endl;
    cout<<"area of rectangle="<<rectangle(8,5)<<endl;
    cout<<"simple interest="<<simpleinterest(8,9,7)<<endl;
    return 0;
 }

 