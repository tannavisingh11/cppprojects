#include <iostream>
using namespace std; 
class Student {
    private:   
    int marks;
    public:   
    // 1. Default Constructor     
    Student()    
    {       
        
        marks = 0;  
        cout << "Default Constructor called" << endl;  
        }      // 2. Parameterized Constructor     
        Student(int m)    
        {        
            marks = m;        
            cout << "Parameterized Constructor called" << endl;  
            }      // 3. Copy Constructor    
            Student(const Student &s)   
            {       
                marks = s.marks;        
                cout << "Copy Constructor called" << endl;     
                
            }      // Display marks    
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
{     // Default constructor     
Student s1;  
s1.display(); 
cout << endl; 
Student s2(90);
s2.display(); 
cout << endl; // Copy constructor 
Student s3 = s2; 
s3.display(); 
cout << endl;
return 0; 
    
} // Parameterized constructor     Student s2(90); s2.display(); 