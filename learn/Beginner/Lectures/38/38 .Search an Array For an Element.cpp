// Header file
#include <iostream>
// Search an Array For an Element.
// Search an Array For an Element : .
using namespace std;

int main(){
    int list[] = {1,3,5,8,7,9};
    int size = sizeof(list)/sizeof(list[0]);

    int the_Number = 10;
    bool checker = false;

    for(int i = 0; i < size; i++){
        // if statment to check if we found the element
        if(list[i] == the_Number){
            checker = true;
            cout << "Element found at index " << i << endl;
        }
    }

    if(!checker){
        cout << "Element not found" << endl;
    }
    return 0; // function will end without any error
}