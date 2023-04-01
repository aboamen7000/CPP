// Header file
#include <iostream>
// Structs.
// Structs : are a way to group several related variables into one place.
//                    
using namespace std;

struct My_info
{
    string name;
    int age;
    float height;
};

struct Dimentions
{
    int x, y;
};

void print_dimentions(Dimentions dimention){
    cout<< "(" << dimention.x << ", " << dimention.y << ")" << endl;
};

struct my_info{
   float height;
   float weight;
};

my_info creating_info(float h, float w){
    my_info info = {h,w};
    return info;
}

struct circle
{
    float x,y,radius;

    circle(float x, float y, float radius){
        this->x = x;
        this->y = y;
        this->radius = radius;
    }
};

int main(){
    // Defining a struct
    // My_info info;
    // info.name = "IA";
    // info.age = 26;
    // info.height = 180.0;

    // Struct as a function parameter
    // Dimentions dimention = {5,6};
    // print_dimentions(dimention);

    // Struct as a return type
    // my_info info = creating_info(180.0, 66.5);
    // cout << "height : " << info.height << " ,weight : " << info.weight << endl;

    // Struct with a constructor
    circle circle(3.5f, 5.5f, 6.6f);
    cout << "Center : (" << circle.x << "," << circle.y << "," << circle.radius << ")" << endl;
    return 0; // function will end without any error
}