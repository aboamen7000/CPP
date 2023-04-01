// Header file
#include <iostream>
#include <cstdlib>
#include <ctime>
// Random Event Generator.
// Random Event Generator : generates a sequence of events based on some probability distribution.
using namespace std;
int main(){
    // Method 1 : Rolling a dice;
    // srand(time(NULL));
    // int roll = rand() % 6 + 1;
    // cout << "You Rolled a : " <<roll << endl;

    // Method 2 : Flipping a coin;
    // srand(time(NULL));
    // int flip = rand() %2; // Generate a random number 0 or 1
    // if(flip == 0) {
    //     cout << "Heads!" << endl;
    // }else if(flip == 1){
    //     cout << "Tails!" << endl;
    // }

    // Method 3 : range a number;
    // srand(time(NULL));
    // int min_num =1, max_num = 100;
    // int rand_num = ( rand() % (max_num - min_num  + 1 ) ) + min_num;
    // cout << "Random Number : " << rand_num;

    // Method 4 : random letters;
    // srand(time(NULL));
    // char random_letter = 97 + (rand() % 26); // "A" to "Z"
    // cout << "Random Letter : " << random_letter << endl;
    // return 0; // function will end without any error
}