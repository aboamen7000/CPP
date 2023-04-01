// Header file
#include <iostream>
// Memory Adresses.
// Memory Adresses : the location of where the variable is stored on the computer.
using namespace std;

int main(){
    // Printing the memory address of a variable
    // int a = 15;
    // cout << "The memory address of a is : " << &a << endl;

    // Using pointers to access memory addresses
    // int a = 15;
    // int* ptr = &a;
    // cout << "the value of a is : " << *ptr << endl;

    // Using pointers to dynamically allocate memory
    int *list = new int[5]; // dynamically allocating memory for an integer array of size 5
    
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 1;
    list[4] = 5;

    delete[] list; //deallocating the memory for the array

    return 0; // function will end without any error
}