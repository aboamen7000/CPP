// Header file
#include <iostream>
#include <algorithm>
// Multidimensional Arrays.
// Multidimensional Arrays : declare and use multidimensional arrays.
using namespace std;

int main(){
    // Declaring a 2D array of integers with 3 rows and 4 columns
    // int list[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };
    // cout << "Result of first row and second column : " << list[0][3] << endl;

    // Declaring a 3D array of integers with 2 blocks, 3 rows, and 4 columns
    // Declaring+Assignment a 3D array with values
    int list[2][3][4] = {
        //block 1
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    },
        // block 2
    {
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    }
    };
    cout << "Result of second block, where 1st row and second column : " << list[1][0][1] << endl;

    return 0; // function will end without any error
}