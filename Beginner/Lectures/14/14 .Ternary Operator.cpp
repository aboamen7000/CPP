// Header file
#include <iostream>
// Ternary Operator.
// Ternary Operator : is a shorthand way of writing a simple if-else statement.
//                    (condition) ? expression1 : expression2;
using namespace std;

int absoluteValue(int number){
    return ( number < 0 ) ? -number : number; //
}

int main(){

    // Example 1: IF statment case
    // int age = 18;
    // if(age >= 18){
    //     cout << "you are young enough to get this";
    // }else{
    //      cout << "you are not to be allowed to get this";
    // }
    // (age >= 18) ? cout << "you are young enough to get this" : cout << "you are not to be allowed to get this";


    // Example 2: Basic Usage
    // int x = 50;
    // int y = 20;
    // int max = (x > y) ? x :y;
    // cout << "The maximum value : " << max;

    // Example 3: Return statment (abs)
    // int result = absoluteValue(-5); // get the fun result to the variable
    // cout << "Result of the Absolute is : " << result << endl;
    // cout << "Result of the Absolute is : " << absoluteValue(-10); // get the fun result to terminal cout

    // Example 4: Using ternary operator in a loop condition
    // if index < 10, will make increment < 5 \ else check if index < 8

    // int index = 0; // 0 1 2 3 4
    // while( (index < 10)? index < 5 : index < 8){
    //     index++;
    // }
    // cout << "Result of index : " << index; // get the fun result to terminal cout

    // Example 5: Chaining multiple ternary operators
    // (condition) ? expression1 : (condition) ? expression1 : expression2;
    int number = 0;
    string Result = (number > 0) ? "Positive" : (number < 0) ? "Negative" : "Zero";
    cout << Result;
    return 0; // function will end without any error
}



