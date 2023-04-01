// Header file
#include <iostream>
#include <string>
// Useful Math-Related Functions.
// Useful Math-Related Functions : 
using namespace std;
int main(){

    // Method 1 : cin
    // int my_age;
    // cout << "Enter your age : ";
    // cin >> my_age;
    // cout << "My Age is : " << my_age << endl; // new buffer line (prevent new buffer line) fixing by add cin >> ws , with in new input method

    // Method 2 : getline()
    // string my_name;
    // cout << "Enter your name : "; //;
    // getline(cin >> ws , my_name);
    // cout << "My name is : " << my_name << endl;

    // Method 3 : scanf()
    // int my_age;
    // cout << "Enter your age : ";
    // scanf("%d", &my_age); // decimal/integer %(d/i), %c, ibrahim >> %s
    // // & pass the address of my_age variable to scanf().
    // cout << "My Age is : " << my_age;

    return 0; // function will end without any error
}