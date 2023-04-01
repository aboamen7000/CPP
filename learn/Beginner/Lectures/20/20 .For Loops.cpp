// Header file
#include <iostream>
#include <string>
// for loops.
// for loops : a loop is used to repeat a block of code until the specified condition is met
using namespace std;
int main(){
    // Method 1: print (0,,,10)
    // for (int index = 0; index <= 10; index++){
    //     cout << index << endl;
    // }

    // Method 2: print (10,,,0)
    // for(int index = 10; index >= 1; index--){
    //     cout << index << endl;
    // }

    // Method 3: Sum of the first 10 number : 10 9 8 7 6 5 4 3 2 1
    // int factorial = 0;
    // for (int i = 10; i >= 1; i--)
    // {
    //     factorial+=i;
    // }
    // std::cout << "The factorial of the first 10 natural numbers is: " << factorial;

    // Method 4: print the multiplication table of a number : 5*1 5*2 5*3 ....
    // int static_multi = 5;
    // for(int i = 1; i <= 10; i++){
    //     cout << static_multi << " * " << i << " = " << static_multi*i << endl; // 5 * 1 = 5
    // }

    return 0; // function will end without any error
}