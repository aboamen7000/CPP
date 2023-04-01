// Header file
#include <iostream>
#include <map>
// Foreach Loop.
// Foreach Loop : .
using namespace std;

int main(){
    // Method 1 : Iterating over an array of integers
    // int num[] = {1,
    // 2,
    // 3,
    // 4,
    // 5};
    // for(int numbers : num){
    //     cout << numbers << endl;
    // }

    // Method 2 : Iterating over a vector of strings
    // string fruits[] = {"Apple", "Banana","Cherry","Date"};

    // for(string fruit : fruits){
    //     cout << fruit << endl;
    // }

    // Method 3 : Iterating over a string [char]
    // string greeting = "Hello";
    // for (char chr : greeting) {
    //     cout << chr << "\t";
    // }

    // Method 4 : Iterating over a map [name,age]
    map<string,int> ages = {
        {"IA",25},
        {"Ahmad",22},
        {"Ali",29},
    };
    // assignment ages.
    // ages["3mr"] = 15;
    for(auto& types : ages) // auto& grab item and we can edit it... C++17 [ [name,age] ], C++11 [type.first/.second]
    {
        cout << types.first << " is " << types.second << " Years old." << endl;
    }

    return 0; // function will end without any error
}