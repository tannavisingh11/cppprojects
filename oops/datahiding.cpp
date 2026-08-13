#include <iostream> 
using namespace std; 
class BankAccount {
    private:   
    int balance; 
    public:     // Function to set initial balance   
    void setBalance(int b) 
    { 
        balance = b;    
        }      // Deposit money    
        
        void deposit(int amount)  
        {     
            balance = balance + amount;      
            cout << "Amount deposited: " << amount << endl; 
            }      // Withdraw money  
            void withdraw(int amount)   
            {      
                if (amount <= balance) 
            {        
                balance = balance - amount;          
                cout << "Amount withdrawn: " << amount << endl;  
                }     
                else   
                {     
                    cout << "Insufficient balance!" << endl;   
                    }   
                    }      // Display balance    
                    void showBalance()   
                    {       
                        cout << "Current balance: " << balance << endl; 
                    }
                    };
                    int main()
                    {    
                        BankAccount account;    
                        account.setBalance(5000); 
                        account.showBalance();    
                        account.deposit(2000);   
                        account.showBalance(); 
                        account.withdraw(1000);
                        account.showBalance(); 
                        account.withdraw(7000);
                        return 0; 
                        
                    } 