// Header file
#include <iostream>
#include <string>
// while loop.
// while loop : Loops can execute a block of code as long as a specified condition is reached
using namespace std;
int main(){
    // Method 1
    // int i = 1;
    // while (i <= 10)
    // {
    //     /* code */
    //     cout << i << " ";
    //     i++; // i+ = 3; // i = i + 1;
    // }

    // Method 2
    string input;

    while (input !="Quit")
    {
        /* code */
        cout << "Please Enete a word Quit to exit : ";
        cin >> input;
        cout << "You entered : " << input << endl;
    }
    
    
    return 0; // function will end without any error
}