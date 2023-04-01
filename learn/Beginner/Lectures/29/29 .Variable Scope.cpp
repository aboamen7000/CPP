// Header file
#include <iostream>
// Variable Scope.
// Variable Scope : variable scope determines where in the code a variable can be accessed and used. 
//                  Local Variable Scope       
//                  Global variable (main/function/class)
using namespace std;

// Global variable
int global_scope = 10;
void function_global(){
    cout << "global variable inside function " << global_scope << endl;
}

// Local Variable Scope
void function_local(){
    int local_scope = 20;
    cout << "Local variable inside function " << local_scope << endl;
}

class Scoping{

    public:
        // Class scope variable
        int global_scope_class = 50;

        void function_global(){
            cout << "Class scope variable inside member function: " << global_scope_class << endl;
        }
};


int main(){
    // Local Variable Scope
    int local_scope = 30;
    cout << "Local variable inside main function " << local_scope << endl;
    function_local();    
    
    // Global variable
    cout << "Global variable inside main: " << global_scope << endl;
    function_global();

    // Global variable [From Class]
    Scoping object;
    cout << "Class scope variable outside of class: " << object.global_scope_class << endl;
    object.function_global();

    return 0; // function will end without any error
}


