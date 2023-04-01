// Header file
#include <iostream>
// Constructor Overloading
// Constructor Overloading : .
//         
using namespace std;

class Shape{

public:

    Shape(){
        type = "Undefined";
    }

    Shape(const string& t){
        type = t;
    }

    Shape(const string& t, float w , float h){
        type = t;
        width = w;
        height = h;
    }

private:
    string type;
    float width;
    float height;
};

int main(){
    Shape shape1; // deafult constructor
    Shape shape2("Circle");
    Shape shape3("Circle",1.1f,5.5f);

    return 0; // function will end without any error
}