// Header file
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>
// Rock Paper Scissors Game.
// Rock Paper Scissors Game : . 
//                       
//                  
using namespace std;

int error(){
    cout << "Invalid choice" << endl;
    return 0;
}

int tie(){
    cout << "its a Tie!" << endl;
    return 0; 
}
int win(){
    cout << "You win!" << endl;
    return 0; 
}
int lose(){
    cout << "Computer wins!" << endl;
    return 0; 
}

int main(){
    string player;
    int random_choice;

    srand(time(NULL)); // seed the random number generator

    cout << "Choose Your trun :" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Your Turn : ";
    getline(cin, player);

    if (!player.empty() && player == "1" || player == "2" || player == "3"){

    }else{
        cout << "Invalid choice" << endl;
        exit(1);
    }   


    random_choice = rand() % 3 + 1; // generate random number between 1 and 3

    switch(random_choice){

        case 1:
            cout << "Computer Choice : Rock" << endl;
            break;
        case 2:
            cout << "Computer Choice : Paper" << endl;
            break;
        case 3:
            cout << "Computer Choice : Scissors" << endl;
            break;     
    }

    if (player == "1"){
        if  (random_choice == 1){
            tie();
        }
        if  (random_choice == 3){
            win();
        }
        if  (random_choice == 2){
            lose();
        }
    }else if (player == "2")
    {
        if  (random_choice == 2){
            tie();
        }
        if  (random_choice == 1){
            win();
        }
        if  (random_choice == 3){
            lose();
        }
    }else if (player == "3")
    {
        if  (random_choice == 3){
            tie();
        }
        if  (random_choice == 2){
            win();
        }
        if  (random_choice == 1){
            lose();
        }

    }
    


    return 0; // function will end without any error
}