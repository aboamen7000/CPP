// Header file
#include <iostream>
// If Statments.
// If Statments : check the value of the variable
using namespace std;
int main(){
    int age;

    cout << "What is your age : ";
    cin >> age;

    // 1) Basic if statment:
    // if (age == 18){
    //     cout << "you are old enough to vote your age is : " << age  << endl;
    // }
    // 2) else if statment:
    // else if(age >= 18){
    //     cout << "you are too old enough to vote your age is : " << age << endl;
    // }
    // // else-if statment:
    // else{
    //     cout << "you are not old enough to vote your age is : " << age << endl;
    // }

    // 3) Nested if statement || as guessing game for exmple
    // if (age > 18){

    //     if (age < 25){
    //         if (age == 22){
    //         cout << "you are 22 years old" << endl;
    //         }
    //     }
    // }

    return 0; // function will end without any error
}