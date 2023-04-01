// Header file
#include <iostream>
// Pass by VALUE vs Pass by REFERENCE.

// Pass by VALUE : When passing an argument by value, the value of the argument is copied into a new variable
//                 and this new variable is used within the function. Any changes made to this new variable
//                 within the function have no effect on the original variable outside the function.

// Pass by Reference : When passing an argument by reference, a reference to the original variable is passed to the function.
//                     Any changes made to this reference within the function also affect the original variable
//                     outside the function.
using namespace std;

void chaningvalue1(int number){
    number = 25;
}

void chaningvalue2(int &number){
    number = 35;
}

int main(){
    // Pass by Value
    // int number = 5;
    // cout << "value before call the function with passing the argument : " << number << endl;
    // chaningvalue1(number);
    // cout << "value after call the function with passing the argument : " << number << endl;

    // Pass by Reference
    int number = 5;
    cout << "value before call the function with passing the argument : " << number << endl;
    chaningvalue2(number);
    cout << "value after call the function with passing the argument : " << number << endl;
    return 0; // function will end without any error
}