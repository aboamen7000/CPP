// Header file
#include <iostream>
// Console Calculator Program.
// Console Calculator Program : Simple Calculator.
using namespace std;

int main(){
    char operator_symbol;
    double num1,num2;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2; // 2 5

    cout << "Enter an symbol (+ , -, *, /) : ";
    cin >> operator_symbol;

    switch(operator_symbol){

        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2; // 2 + 5 = 7
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2; // 2 - 5 = 3
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2; // 2 * 5 = 10
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2; // 2 / 5 = 0.4
            break;

        default:
        cout << "Invalid Operator";
        break; 

    }

    return 0; // function will end without any error
}