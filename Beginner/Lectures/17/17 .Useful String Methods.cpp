// Header file
#include <iostream>
#include <string>
// Useful String Methods.
// Useful String Methods : length() | substr() | find() | replace() | append() | c_str() | erase()
//                         find_first_of() | compare() | empty()
using namespace std;
int main(){
    // string str = "Hello, world.!";
    // cout << "Length of the string : " << str.length() << endl; //Length of the string : 14

    // string str = "Hello, world.!";
    // cout << "Substring : " << str.substr(0,5) << endl; //Substring : Hello

    // string str = "Hello, world.!";
    // size_t index = str.find("world"); // 7
    // cout << "Substring : " << str.substr(index) << endl; //Substring : world.!

    // string str = "Hello, world.!";
    // str.replace(str.find("Hello"),4, "Cya");
    // cout << "Modified String :  : " << str << endl; //Modified String :  : Cyao, world.!

    // string str = "Hello, world.!";
    // string str2 = "     Hello";
    // str.append(str2);
    // cout << str ; // Hello, world.!     Hello

    // string str = "Hello, world.!";
    // str.replace(str.find("Hello"),4, "Cya");
    // cout << "Modified String :  : " << str << endl; //Modified String :  : Cyao, world.!

    // returns a pointer to a null-terminated character array that represents the string
    // string str = "Hello, world.!";
    // const char* ptr = str.c_str();
    // cout << "C-Style String : " << ptr << endl; //C-Style String :

    // string str = "Hello, world.!";
    // str.erase(5, 7);
    // cout << "Modified String : " << str << endl; //Modified String : Hello.!

    // string str = "HeLLo, world.!";
    // // finds the index of the first occurrence of any character in "lwdr" within the string
    // size_t index = str.find_first_of("Lwdr"); // 2
    // cout << "Char : " << str[index] << endl;

    // string str1 = "Hello, world.!";
    // string str2 = "Hello, everyone.!";
    // int result = str1.compare(str2);
    // if (result == 0) {
    //     cout << "The strings are equal. : " <<  result <<endl;
    // } else if (result < 0) {
    //     cout << "str1 is less than str2. : " <<  result <<endl;
    // } else {
    //     cout << "str1 is greater than str2. : " <<  result <<endl;
    // }

    // string str = "HeLLo, world.!";
    // if (str.empty()){
    //     cout << "The string is empty." << endl;
    // }else{
    //     cout << "The string is not empty." << endl;
    // }
    
    return 0; // function will end without any error
}