// Header file
#include <iostream>
// enums
// enums : is a user defined data type in C++ .
//         
using namespace std;

enum Colors{
    RED,
    GREEN,
    BLUE
};

enum Fruits{
    Banana = 5,
    Apple=10,
    Orange=2
};

enum Names{
    AHMAD,
    Ali,
    Omar,
    Khaled
};

void print_values(Names names){
    switch (names){
    case AHMAD:
        cout << "found : AHMAD" << endl;
        break;
    case Ali:
        cout << "found : Ali" << endl;
        break;
    case Omar:
        cout << "found : Omar" << endl;
        break;
    case Khaled:
        cout << "found : Khaled" << endl;
        break;
    default:
        cout << "Unknown Name" << endl;
        break;
    }
}
int main(){
    // Basic enum
    // Colors collors = RED;
    // if (collors == GREEN){
    //     cout << "Green" << endl;
    // }else{
    //     cout << "not green" << endl;
    // }
    
    // Enum with explicit values
    // Fruits fruits = Banana;
    // cout << fruits << endl;

    // Enum with a switch statement
    Names names = Ali;
    print_values(names);
    return 0; // function will end without any error
}