// Header file
#include <iostream>
// Pass structs as arguments.
// Pass structs as arguments :.
//         
using namespace std;
struct Info
{  
    string name;
    int age;
};
void printer(Info info){
    cout << "Name : " <<info.name << ", MY Age : " << info.age <<endl;
}

struct Info2{
    string name;
    int age;
    float height;
};

void updating(Info2& info, string name, int age, float height){
    info.name = name;
    info.age = age;
    info.height = height;
}
int main(){
    // Pass struct by value
    // Info info = {"IA",25};
    // printer(info);

    //Pass struct by reference
    Info2 info = {"IA",25,180.0};
    cout << "Name: " << info.name << ", Age: " << info.age << ", Height: " << info.height << endl;
    updating(info,"Ahmad",20,170.0);
    cout << "Name: " << info.name << ", Age: " << info.age << ", Height: " << info.height << endl;
    
    return 0; // function will end without any error
}