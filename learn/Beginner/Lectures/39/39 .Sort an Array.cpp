// Header file
#include <iostream>
#include <algorithm>
// Sort an Array.
// Sort an Array : .
using namespace std;

int main(){
    int list[] = {1,3,2,4,5,8,7,10,9};
    int size = sizeof(list)/sizeof(list[0]);

    sort(list, list + size);

    for(int i = 0; i <size ; i++){
        cout << list[i] << " ";
    } // 1 2 3 4 5 7 8 9 10 

    cout << endl;

    // or using foreach
    // for(int element : list){
    //     cout << element << " ";
    // } // 1 2 3 4 5 7 8 9 10 

    return 0; // function will end without any error
}