// Header file
#include <iostream>
// Object Oriented Programming
// Object Oriented Programming : .
//         
using namespace std;

class Rectangle{
private:
    int width;
    int height;
public:
    //Contractor
    Rectangle(int w, int h){
        width = w;
        height = h;
    }

    int getArea(){
        return width * height;
    }

    int perimeter(){
        return 2 * (width + height);
    }

    int setwidth(int w){
        width = w;
    }

    int setheight(int h){
        height = h;
    }
};


int main(){
    // Class with constructor and methods
    Rectangle rectangle(10,20);
    cout << "Area : " << rectangle.getArea() << endl;
    rectangle.setwidth(8);
    cout << "perimeter : " << rectangle.perimeter() << endl;
    return 0; // function will end without any error
}