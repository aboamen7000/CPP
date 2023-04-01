// Header file
#include <iostream>
#include <string>
// do while loop.
// do while loop : is a variant of the while loop. This loop will execute the code block once, 
//              before checking if the condition is true, then it will repeat the code
using namespace std;
int main(){
    // Method 1
    // int i = 1;
    // do
    // {
    //     cout << i << " ";
    //     i++; // i+ = 3; // i = i + 1;
    // } while (i <= 10);
    


    // Method 2
    string input;
    do
    {
        cout << "Please Enete a word Quit to exit : ";
        cin >> input;
        cout << "You entered : " << input << endl;
    } while (input !="Quit");
    
    
    
    return 0; // function will end without any error
}