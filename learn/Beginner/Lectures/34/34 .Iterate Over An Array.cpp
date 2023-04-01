// Header file
#include <iostream>
// Iterate Over An Array.
// Iterate Over An Array : .
using namespace std;

int main(){
    // Method 1 : Using a For Loop to Iterate Over an Array
    int number[5] = {1,2,3,4,5};
    // cout << "Element 1" << " of the number array is " << number[0] << endl;
    // cout << "Element 2" << " of the number array is " << number[1] << endl;
    // cout << "Element 3" << " of the number array is " << number[2] << endl;
    // cout << "Element 4" << " of the number array is " << number[3] << endl;
    // cout << "Element 5" << " of the number array is " << number[4] << endl;

    // for(int i = 0; i < sizeof(number) / sizeof(number[0]); i++){
    //     cout << "Element " << i+1 << " of the number array is " << number[i] << endl;
    // }

    // Method 2 : Using a Range-Based For Loop to Iterate Over an Array
    // for( int number : number){
    //     cout << number << endl << endl;
    // }

    // Method 3 : Using a Pointer to Iterate Over an Array
    int * ptr = number;
    int size_of_array = sizeof(number) / sizeof(number[0]);
    for (int i = 0 ; i < size_of_array ; i++){
        cout << "Element " << i+1 << " of the number array is " << *ptr << endl;
        *ptr++;
    }

    return 0; // function will end without any error
}