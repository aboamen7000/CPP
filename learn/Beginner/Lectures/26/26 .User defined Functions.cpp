// Header file
#include <iostream>
// User defined Functions.
// User defined Functions : a block of resuable code. 
//                        
//
using namespace std;

int max_number(int num_1, int num_2){

    // if (num_1 > num_2){
    //     return num_1;
    // }else{
    //     return num_2; 
    // }

   return (num_1 > num_2) ? num_1 : num_2;
}

int main(){
    // Method 1 : Function to Find the Maximum of Two Numbers
    // int a,b;
    // a = 5;
    // b = 7;
    // int result = max_number(a,b);
    // cout << "The Maxium of " << a << " and " << b << " is " << result << endl;

    return 0; // function will end without any error
}