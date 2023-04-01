// Header file
#include <iostream>
#include <algorithm>
// fill() Function.
// fill() Function : .
using namespace std;

int main(){
    int list[5]; // 10,10,10,10,10
    int size = sizeof(list)/sizeof(list[0]);
    fill(list, list+5, 10);

    // foreach
    for(int listo : list){
        cout << listo << " ";
    }

    cout << endl << endl;

    // for loop
    for(int i = 0; i <size ; i++){
         cout << list[i] << " ";
    }

    return 0; // function will end without any error
}