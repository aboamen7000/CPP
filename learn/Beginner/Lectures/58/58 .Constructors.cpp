// Header file
#include <iostream>
// Constructors
// Constructors : .
//         
using namespace std;

class my_info{
public:

    string name_stored;
    int age_stored;

    my_info(string arg_name, int arg_age){
        name = arg_name;
        age = arg_age; 
        name_stored = name;
        age_stored = age;
    }
private:
    string name;
    int age;
};

int main(){
    // Default constructor
    my_info info("IA",25);
    cout << "Name : " << info.name_stored << endl;
    return 0; // function will end without any error
}