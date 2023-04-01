// Header file
#include <iostream>
// Pass Array to a Function.
// Pass Array to a Function : .
using namespace std;

void passed_argus_1(int list[], int size){
    for(int i = 0; i < size; i++){
        cout << list[i] << endl;
    }
}

void passed_argus_2(string names[], int size){
    for(int i = 0; i < size; i++){
        cout << names[i] << endl;
    }
}

void passed_argus_3(int matrix[][3], int size){

    for(int row = 0; row < size; row++){
        for(int column = 0; column < size; column++){
            cout << matrix[row][column] << "\t";
        }
        cout << endl;
    }
}

int main(){
    // Method 1 : Passing an array of integers to a function
    // int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    // int size = sizeof(numbers) / sizeof(numbers[0]);
    // passed_argus_1(numbers,size);

    // Method 1 : Passing an array of strings to a function
    // string names[] = {"IA", "Ahmad", "Omar", "Khaled"};
    // int size = sizeof(names) / sizeof(names[0]);
    // passed_argus_2(names,size);

    // Method 3 : Passing a 2D array to a function
    int matrix[][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int size = sizeof(matrix) / sizeof(matrix[0]);
    passed_argus_3(matrix, size);

    return 0; // function will end without any error
}