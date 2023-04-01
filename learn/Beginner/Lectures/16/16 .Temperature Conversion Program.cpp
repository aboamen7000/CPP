// Header file
#include <iostream>
// Temperature Conversion Program.
// Temperature Conversion Program : get temperature (Fahrenheit | Celsius)
using namespace std;

int Celsius(){
    int f;
    int c;

    cout << "Please Enter Celsius : ";
    cin >> c;

    f = (c * 9 / 5) + 32;

    cout << c << "°C is equal to " << f << "°F." << endl;

    return 0;
}
int Fahrenheit(){
    int f;
    int c;

    cout << "Please Enter Fahrenheit : ";
    cin >> f;

    c = ( f - 32 ) * 5 / 9;

    cout << f <<  "°F is equal to " << c << "°C." << endl;

    return 0;
}

int Error(){
    cout << "Invalid temperature";
    return 0;
}
int main(){
    char temp;

    cout << "Please Choose Fahrenheit or Celsius (F/C) : ";
    cin >> temp;

    // if statment (if(statment)) / switch cases (switch(operator)) / ternary (concition) ? true : false
    (temp == 'C') ? Fahrenheit() :(temp == 'F') ? Celsius() : Error();
    
    return 0; // function will end without any error
}

