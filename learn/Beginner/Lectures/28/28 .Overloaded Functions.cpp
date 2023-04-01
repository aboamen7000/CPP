// Header file
#include <iostream>
// Overloaded Functions.
// Overloaded Functions : are functions that have the same name but different parameters. 
//                        
//
using namespace std;

int add(int a, int b){
    return a + b;
}
float add(float a, float b){
    return a + b;
}
double add(double a, double b, double c){
    return a + b + c;
}

void printt(int a){
    cout << "Integer: " << a << endl;
}
void print(float a){
    cout << "Float: " << a << endl;
}
void print(double a){
    cout << "Double: " << a << endl;
}

int max(int a, int b){
   return (a > b) ? a : b;
}

float max(float a, float b){
    return (a > b) ? a : b;
}

double max(double a, double b,double c){
    return max(max(a,b),c);
}
int main(){
    // Method 1 : Addition function
    // int res_1 = add(1,2);
    // int res_2 = add(0.01f,1.1f);
    // int res_3 = add(5.0,6.5,1.0);

    // Method 2 : Print function
    // printt(1);
    // print(1.5f);
    // print(1.000);

    // Method 3 : Find maximum function
    // cout << "Integer: " << max(1,2) << endl;  
    // cout << "Float: " << max(1.5f,2.0f) << endl;  
    // cout << "Double: " << max(1.0,2.0,3.0) << endl;  
    return 0; // function will end without any error
}