// Header file
#include <iostream>
#include <cmath>
// Calculates the Hypotenuse.
// Calculates the Hypotenuse : 
using namespace std;
int main(){
    // sqrt(a^2 + b^2)
    double a, b, c;
    // Method 1 : static values.
    // a = 2.0;
    // b = 3.0;
    // c = sqrt( pow(a,3) + pow(b, 2));

    // Method 2 : custom values from input.
    cout << "Enter the a value (side value) : ";
    cin >> a;
    
    cout << "Enter the b value (side value) : ";
    cin >> b;

    c = sqrt( pow(a,2) + pow(b, 2));

    cout << "The Result is : " << c << endl;

    return 0; // function will end without any error
}