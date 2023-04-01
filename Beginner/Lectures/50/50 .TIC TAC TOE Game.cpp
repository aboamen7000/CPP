// Header file
#include <iostream>
// TIC TAC TOE Game.
// TIC TAC TOE Game : .
//                    
using namespace std;

char board[3][3] = {
    {' ',' ',' '},
    {' ',' ',' '},
    {' ',' ',' '}
};

char Currently_Player = 'X';

void Drawing_Border(){
    cout << endl;
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << endl;
    cout << endl;
}

bool placeholder_checker(int row, int column){
    if (board[row][column] != ' '){
        return false; // it will return to the caller with false bool as (placeholder_checker) = false
    }
    board[row][column] = Currently_Player;
    return true; // it will finish this func without any error and will return as (placeholder_checker) = true
}
void Switch_Player(){

    // if (Currently_Player = 'O'){
    //     Currently_Player = 'O';
    // }else{
    //     Currently_Player = 'X';
    // }

    (Currently_Player == 'X') ?  Currently_Player = 'O' : Currently_Player = 'X';
}

bool check_rows(){
    for (int index = 0; index < 3; index++){
        if(board[index][0] == board[index][1] && board[index][1] == board[index][2] && board[index][0] != ' '){
            return true; // exit function with return ture,  to the main function
        }
    }
    return false; // exit function with null return
}

bool check_column(){
     for (int index = 0; index < 3; index++){
        if (board[0][index] == board[1][index] && board[1][index] == board[2][index] && board[0][index] != ' ') {
            return true; // exit function with return ture,  to the main function
        }
    }
    return false; // exit function with null return
}

bool check_Diagonals(){
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return true; // exit function with return ture,  to the main function
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return true; // exit function with return ture,  to the main function
    }
    return false; // exit function with null return
}
bool Check_win(){
    return check_rows() || check_column() || check_Diagonals();
}

int main(){
    int row,column;

    cout << "Welcome to TIC TAC TOE GAME.!!" << endl;
    Drawing_Border();

    while (true)
    {
        cout << "Player " << Currently_Player << ", enter ||| row + column : ";
        cin >> row >> column;

        if(row < 0 || row > 2 || column < 0 || column >2){
            cout << "Invalid input. Try again." << endl;
        }else{

            if(placeholder_checker(row,column)){
                Drawing_Border();
                if (Check_win()){
                    cout << "Player " << Currently_Player << " Win. Congrats..!" << "\n";
                    break;
                }
                Switch_Player();
            }else{
                cout << "That spot is already taken. Try another spot." << endl;
            }

        }
    }

    return 0; // function will end without any error
}