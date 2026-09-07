#include <iostream>
using namespace std; 
class Student {
    private:   
    int marks;
    public:   
       
    Student()    
    {       
        
        marks = 0;  
        cout << "Default Constructor called" << endl;  
        }          
        Student(int m)    
        {        
            marks = m;        
            cout << "Parameterized Constructor called" << endl;  
            }         
            Student(const Student &s)   
            {       
                marks = s.marks;        
                cout << "Copy Constructor called" << endl;     
                
            }          
            void display()  
            {        
                cout << "Marks = " << marks << endl;  
            }
            ~Student()   
            {        
                cout << "Destructor called" << endl;   
                } 
    
};
int main()
{          
Student s1;  
s1.display(); 
cout << endl; 
Student s2(90);
s2.display(); 
cout << endl; 
Student s3 = s2; 
s3.display(); 
cout << endl;
return 0;     
 Student s2(90); 
 s2.display(); 
 } 