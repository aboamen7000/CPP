// Header file
#include <iostream>
// Break And Continue.
// Break And Continue : Break => statement is used to exit the for loop when i equals 5
//                      so the loop stops printing numbers and exits early condition
//                      continue => statement is used to skip over even numbers
//                      and continue with the next iteration of the loop
using namespace std;
int main(){ 

    // Method 1 : Break;

    // for(int i = 1; i <= 10; i++){

    //     if(i == 5){
    //         break; // Exit the loop when i = 5 [1,4.. Break the code]
    //     }
    //     cout << i << endl;
    // }

    // Method 2 : Continue;

    //     for(int i = 1; i <= 10; i++){

    //     if(i == 5){
    //         continue; // Skip even numbers [1,,10 :Except number 5]
    //     }
    //     cout << i << endl;
    // }

    return 0; // function will end without any error
}