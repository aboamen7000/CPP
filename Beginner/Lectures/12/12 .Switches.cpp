// Header file
#include <iostream>
// Switch Cases.
// Switch Cases : switch case statement to print the values
using namespace std;

int factorial(int factor){

    // factorial operator

    switch(factor){
        case 0:
        case 1:
            return 1;
        default:
            return factor + factorial(factor-1); // 3 + 2 + 1 = 6
    }
    return 0;
} 

int main(){
    //example string day; case "First_day"
    //example char day; case "f"
    //example int day; case "1"
    
    // days
    // char day;
    // cout << "Enter a number between 1 and 4 : ";
    // cin >> day;
    // switch (day){
    //     case 1:
    //         cout << "Saturday";
    //         break;
    //     case 2:
    //         cout << "Sunday";
    //         break;
    //     case 3:
    //         cout << "Monday";
    //         break;
    //     case 4:
    //         cout << "Tuesday";
    //         break;
    //     default:
    //     cout << "Invalid Input";
    //     break;    
    // }

    // arithmetic operations
    // int a, b, symbol;
    // cout << "Enter two numbers : "; // num1 num2
    // cin >> a >> b;
    // cout << "Please choice symbol [1.(+) 2.(-) 3.(/) 4.(*)] : ";
    // cin >> symbol;
    // switch (symbol){
    //     case 1: // ? + ? = ?
    //         cout << a << "+" << b << "=" << a+b;
    //         break;
    //     case 2: // ? - ? = ?
    //         cout << a << "-" << b << "=" << a-b;
    //         break;
    //     case 3: // ? / ? = ?
    //         cout << a << "/" << b << "=" << a/b;
    //         break;
    //     case 4: // ? * ? = ?
    //         cout << a << "*" << b << "=" << a*b;
    //         break;
    //     default:
    //         cout << "Invalid Input";
    //         break;
    // }

    // factorial of a number
    int factorial_num;

    cout << "Please enter a positive value : ";
    cin >> factorial_num;

    cout << "Factorial of " << factorial_num << " is : " << factorial(factorial_num);
    return 0; // function will end without any error
}

