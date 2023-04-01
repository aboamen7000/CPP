// Header file
#include <iostream>
#include <string>
#include <algorithm>
// Credit card validator program.
// Credit card validator program : .
using namespace std;
// 4xxx - 0x23 - 4496 - 0xxx

bool validator_card(string cardnum){
    // Remove any spaces or dashes in the card number
    cardnum.erase(remove(cardnum.begin(), cardnum.end(), ' '),  cardnum.end());
    cardnum.erase(remove(cardnum.begin(), cardnum.end(), '-'),  cardnum.end());

    // Check that the card number only contains digits
    if(!all_of(cardnum.begin(), cardnum.end(), ::isdigit)){
        return false;
    }

    // Apply the Luhn algorithm to validate the card number
    int sum = 0;
    bool doubledigit = false;
    for (int i = cardnum.length() - 1; i >=0 ; i--){
        int digit = cardnum[i] - '0';
        if (doubledigit){
            digit *= 2;
            if (digit > 9){
                digit -= 9;
            }
        }

        sum += digit;
        doubledigit = !doubledigit;
    }

    return (sum % 10 == 0);

}
int main(){
    
    string cardNumber;
    cout << "Please enter card number : ";
    getline(cin, cardNumber);

    if (validator_card(cardNumber)){
        cout << "the credit card is valid" << endl;
    }else{
        cout << "The credit card number is invalid" << endl;
    }
    

    return 0; // function will end without any error
}