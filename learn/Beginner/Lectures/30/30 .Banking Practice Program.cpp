// Header file
#include <iostream>
// Banking Practice Program.
// Banking Practice Program : . 
//                       
//                  
using namespace std;

// Simple Banking System

class Banking_Account{
    private:
    string AccountNumber;
    string AccountHolderName;
    float balance;
    
    public:
    Banking_Account(string AccNum, string AccHolder, float bla){ 
        AccountNumber = AccNum;
        AccountHolderName = AccHolder;
        balance = bla;
    }

    void deposite(float amount){
        balance+= amount;
    }

    void withdraw(float amount){

        if (balance >= amount){
            balance-= amount;
        }else{
            cout << "Insufficient balance" << endl;
        }
    }

    void Display(){
        cout << "Account Number : " << AccountNumber << endl;
        cout << "Account Holder Name : " << AccountHolderName << endl;
        cout << "Account Blanace : " << balance << endl;
    }
};

int main(){
    // Single Account
    // Banking_Account account1("123456789","IA Ahmad",100);
    // account1.deposite(2500);
    // account1.Display();  

    // Multi Account
    // Banking_Account account[2] = {
    //     Banking_Account("123456789","IA Ahmad",100),
    //     Banking_Account("987654321","Ahmad Ali",500),
    // };

    // account[0].deposite(2500);
    // account[0].Display();

    // account[1].deposite(8000);
    // account[1].Display();
    
    return 0; // function will end without any error
}