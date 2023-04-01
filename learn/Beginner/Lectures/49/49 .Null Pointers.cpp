// Header file
#include <iostream>
// Null Pointers.
// Null Pointers : If a null pointer constant is converted to a pointer type, the resulting.
//                 pointer, called a null pointer
using namespace std;

void printing_value(int *ptr){

    if (ptr == nullptr){
        cout << "The pointer is null." << endl;
    }else{
        cout << "the value is : " << *ptr << endl; 
    }
}

int main(){
    // Initializing a Pointer to Null
    // int *ptr = nullptr;
    // if (ptr == nullptr){
    //     cout << "The pointer is null." << endl;
    // }

    // Dereferencing a Null Pointer
    // int *ptr = nullptr;
    // cout << *ptr << endl;

    // Checking for Null Pointers in a Function
    int x = 15;
    int *ptr = &x;
    cout << "the address is : " << ptr << endl;
    printing_value(ptr);
    printing_value(nullptr);
    return 0; // function will end without any error
}