// Header file
#include <iostream>
// Const Parameters.
// Const Parameters : [const] which means that their value cannot be modified inside the function
using namespace std;

void printing_nume(const int number){
    cout << "The number is : " << number << endl;
}

int main(){
    int number = 10;
    printing_nume(number);
    return 0; // function will end without any error
}