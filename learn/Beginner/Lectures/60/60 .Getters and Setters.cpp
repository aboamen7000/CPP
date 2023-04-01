// Header file
#include <iostream>
// Getters and setters
// Getters and setters : methods that are used to access and modify the private member variables of a class.
//         
using namespace std;

class MY_Info{
public:

    MY_Info(){
    }

    void setName(string str){
        name = str;
    }

    string showName(){
        return name;
    }

    void setage(int arg_age){
        age = arg_age;
    }

    int showage(){
        return age;
    }
private:
    string name;
    int age;
    float height;
};
int main(){
    MY_Info my_info;

    my_info.setName("IA");
    my_info.setage(24);

    cout << "Name : " << my_info.showName() << " is " << my_info.showage() << " years old." << endl;

    return 0; // function will end without any error
}