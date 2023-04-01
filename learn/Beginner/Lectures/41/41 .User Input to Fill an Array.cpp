// Header file
#include <iostream>
#include <algorithm>
// User Input to Fill an Array.
// User Input to Fill an Array : .
using namespace std;

int main(){
    const int elements = 8;
    int list[elements]; 
    int size = sizeof(list) / sizeof(list[0]);


    // cout << "insert " << elements << " Element" << endl;
    // for(int i = 0 ; i < size ; i++){
    //     cin >> list[i]; // (i = 0) list[0] = {1},(i = 1) list[1] = {2} ...etc
    // }
    // for(int i = 0 ; i < size ; i++){
    //     cout << list[i] << " "; // (i = 0) list[0] = {1},(i = 1) list[1] = {2} ...etc
    // }
    // cout << endl;

    // Prompt user to enter values for the array
    cout << "Enter " << elements << " values for the array: " << endl;
    for(int i = 0 ; i < size ; i++){
        cin >> list[i];
    }

    cout << "Array Elements : ";
    for(int i = 0 ; i < size ; i++){
        cout << list[i] << " ";
    }

    cout << endl;
    
    return 0; // function will end without any error
}