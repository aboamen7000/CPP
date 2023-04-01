// Header file
#include <iostream>
// sizeof().
// sizeof() : To get the size of an array.
using namespace std;

int main(){
    // Using sizeof to Get the Size of a Data Type
    // cout << "the size of an int is : " << sizeof(float) << endl;

    // Using sizeof to Get the Size of an Array
    // int numbers[5] = {1,2,3,4,5};
    // cout << "the size of numbers array is : " << sizeof(numbers) << " Bytes."  << endl;
    // cout << "total items in array is : " << sizeof(numbers) / sizeof(int) << " items."  << endl;
    // cout << "total items in array is : " << sizeof(numbers) / sizeof(numbers[0]) << " items."  << endl;

    // Using sizeof to Get the Size of a Variable
    // char letter = 'B';
    // cout << "size of the letter variable is : " << sizeof(letter) << " Bytes." << endl;

    // Using sizeof to Calculate the Size of a Struct
    // struct my_info{
    //     string name[20];
    //     int age;
    //     float height;
    // };

    // my_info info;
    // cout << "the size of the my_info struct is : " << sizeof(info) << " Bytes" << endl;
    
    return 0; // function will end without any error
}