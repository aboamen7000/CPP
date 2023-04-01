// Header file
#include <iostream>
// Dynamic Memory.
// Dynamic Memory : can allocate a memory after program compiled [run time].
//                    
using namespace std;

class my_info{
    public:
    string name;
    int age;
};

class additions{
    public:
    int x, y;
};

int main(){
    // Allocating memory for a single variable using new operator
    // int * number = new int;
    // * number = 1;
    // delete number;

    // Allocating memory for an array of variables using new operator
    // int size = 5;
    // int *list = new int[size];
    // for(int i = 0 ; i < size ; i++){
    //     list[i] = i+1;
    //     cout << list[i] << endl;
    // }
    // delete[] list;


    // Allocating memory for an object using new operator
    // my_info *ptr = new my_info;
    // ptr->name = "IA";
    // ptr->age = 29;
    // delete ptr;


    // Allocating memory for an array of objects using new operator

    int size = 3;
    additions *ptr = new additions[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i].x = i + 1;
        ptr[i].y = i + 2;
    }
    delete[] ptr;
    

    return 0; // function will end without any error
}