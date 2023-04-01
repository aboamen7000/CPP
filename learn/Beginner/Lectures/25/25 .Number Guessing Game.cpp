// Header file
#include <iostream>
#include <cstdlib>
#include <ctime>
// Number Guessing Game.
// Number Guessing Game : Number Guessing Game 
//                        Guessing a Number with a Limited Number of Tries 
//                        Guessing a Number with User-Specified Range.
using namespace std;
int guess ,tries = 0; 

int generator(int min, int max){ 
    return rand() % max + min;
}// generate a random number between x and x [Global Scope]
void too_high(){
    cout << "Too High!" << endl;
}
void too_low(){
    cout << "Too Low!" << endl;
}
void win(){
    cout << "You got it in " << tries << " tries!" << endl;
}
int main(){
    int min, max;
    srand(time(0));

    cout << "Enter the minimum and maximum values for the range : ";
    cin >> min >> max;
    
    int secret_num = generator(min,max);

    do
    {
        cout << "Please Enter Secret Number between " << min << " and " << max << " : ";
        cin >> guess;
        tries++;

        // If statment

        // if(guess > secret_num)
        // {
        //     cout << "Too High!" << endl;
        // }else if (guess < secret_num)
        // {
        //     cout << "Too Low!" << endl;
        // }else if (guess == secret_num)
        // {
        //     cout << "You got it in " << tries << " tries!" << endl;
        // }
        
        // Ternary Operator
        // (condition) ? ture : false;

        (guess > secret_num) ? too_high() : (guess < secret_num) ? too_low() : win();//Tuples
 
    } while (guess != secret_num && tries < 5);
    
     cout << "Sorry, you didn't guess the number in time. The number was " << secret_num << "." << endl;
  

    return 0; // function will end without any error
}