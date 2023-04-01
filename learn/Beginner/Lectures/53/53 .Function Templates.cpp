// Header file
#include <iostream>
// Function templates.
// Function templates : defines a family of functions As with any template.
//                    
using namespace std;
template<typename T, typename A>

auto mx(T num1, A num2){
    return (num1 > num2) ? num1 : num2;
}

int main(){
    // Finding the maximum value of two numbers
    int result = mx(1.0, 1.5);
    cout << "Max number is : " << result << endl;

    return 0; // function will end without any error
}