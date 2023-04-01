// Header file
#include <iostream>
// Recursion.
// Recursion : is the technique of making a function call itself.
//                    
using namespace std;

int factoorial(int n){
   return (n == 0 || n == 1) ? 1 : n * factoorial(n-1);
}; 

int main(){
    // Computing the factorial of a number:
    int result = factoorial(5); // 5 * 4 * 3 * 2
    cout << "Result is : " << result << endl;
    return 0; // function will end without any error
}