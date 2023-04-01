// Header file
#include <iostream>
#include <cstdlib>
#include <ctime>
// Random Number Generator.
// Random Number Generator : .
using namespace std;
int main(){
    // Method 1 : Generating a random integer between two values (1-100);

    srand(time(0)); // seed the random number generator with the current time
    // int lower_num = 1 , upper_num = 100;
    // // generate a random number between lower and upper
    // int random_num = rand() % (upper_num - lower_num + 1) + lower_num;
    // cout << "Random Number Between " << lower_num << " and " << upper_num << " Is : " << random_num << endl;

    // Method 2 : Generating a random floating-point number between two values (1.0, 10.0);
    float lower_num = 1.0 , upper_num = 10.0;
    float random_num = static_cast<float>(rand())  / static_cast<float>(RAND_MAX / (upper_num - lower_num));
    cout << "Random Number Between " << lower_num << " and " << upper_num << " Is : " << random_num << endl;

    return 0; // function will end without any error
}