// Header file
#include <iostream>
// Pointers.
// Pointers : is a variable that stores the memory address of another variable as its value.
using namespace std;

int main(){
    // Basic info : v1
    // int number = 8;
    // int *ptr = &number;
    // cout << "The memory address of the number variable comes from ptr value is : " << ptr << endl; //hidden value memory address
    // cout << "the value of the variable or the ptr because they are same value : " << *ptr << endl; // 8
    // *ptr = 5;
    // cout << "the new value of pointer / number value is : " << number << endl; // 5

    // Basic info : v2
    // int x = 10;
    // int* ptr = &x;
    // // Accessing the value of x using the pointer
    // cout << *ptr <<endl;
    // // Changing the value of x using the pointer
    // *ptr = 15;
    // cout << x <<endl;

    // Dynamic Memory Allocation
    int *ptr = new int; // allocates memory dynamically for an integer new
    *ptr = 5;
    cout << *ptr <<endl;
    delete ptr;

    // Pointer to an Array
    int list[] = {1,2,3,4,5};
    int *ptr = list; //

    // Accessing array elements using pointer arithmetic
    for(int index = 0; index < 5; index++){
        cout << *(ptr + index) << endl; //
    }
    return 0; // function will end without any error
}