// Header file
#include <iostream>
// Nested Loops.
// Nested Loops :  allows the looping of statements inside another loop.
using namespace std;
int main(){ 
    int i,j;

    // Method 1 : simple nested loop;
    // for(i = 0; i <= 10; i++){

    //     for(j = 0; j <= 10; j++){
    //         cout << "Number : " << j << " ";
    //     }
    //     cout << endl;
    // }

    // Method 2 : multiplication table;
    for(i = 1; i <=10; i++){

        for(j=1; j <= 10; j++){
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0; // function will end without any error
}