// Header file
#include <iostream>
// Return Keyword.
// Return Keyword : used to exit a function and return a value to the caller. 
//                        
//
using namespace std;

int square(int x){
    return x * x;
}

int ispositive(int x){
    // if(x > 0){
    //     return true;
    // }
    // return false;
   return (x > 0) ? true : false;
}

int main(){
    // cout << square(3) << endl;
    cout << ispositive(1) << endl;
    return 0; // function will end without any error
}