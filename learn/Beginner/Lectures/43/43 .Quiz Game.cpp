// Header file
#include <iostream>
#include <string>
// Quiz Game.
// Quiz Game : .
using namespace std;

int main(){
    int score = 0;
    string answer;

    //Question :1
    cout << "What is the capital of France [Paris/Roma]?" << endl;
    cin >> answer;

    if (answer == "Paris" || answer == "paris"){
        cout << "Correct" << endl;
        score++;
    }
    else{
       cout << "Incorrect. The correct answer is Paris." << endl; 
    }

    //Question :2
    cout << "What is the largest planet in our solar system[Jupiter/Earth]?" << endl;
    cin >> answer;

    if (answer == "Jupiter" || answer == "jupiter"){
        cout << "Correct" << endl;
        score++;
    }
    else{
       cout << "Incorrect. The correct answer is Jupiter." << endl; 
    }

    //Question :3
    cout << "What is the highest mountain in the world[Everest/Himalayas]?" << endl;
    cin >> answer;

    if (answer == "Everest" || answer == "everest"){
        cout << "Correct" << endl;
        score++;
    }
    else{
       cout << "Incorrect. The correct answer is Everest." << endl; 
    }

    // Displaying the final score
    cout << "Your final score is " << score << " out of 3." << endl;
    return 0; // function will end without any error
}