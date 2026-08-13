#include <iostream> 
using namespace std; 

inline int add(int a, int b) { 
    
return a + b; 
}
// 2. Function with Default Argument 
int subtract(int a, int b = 5) {
    return a - b; 
}
    // 3. Function Overloading
    int multiply(int a, int b) { 
        
     return a * b;
    }
    double multiply(double a, double b) {
        
        return a * b; 
    } 
    int main() {
        cout << "Addition: " << add(10, 5) << endl; 
        cout << "Subtraction: " << subtract(10, 3) << endl; 
        cout << "Subtraction using default value: " << subtract(10) << endl;
        cout << "Multiplication of integers: " << multiply(10, 5) << endl; 
        cout << "Multiplication of decimal numbers: " << multiply(2.5, 4.0) << endl; 
        return 0; 
    }