#include<iostream>
using namespace std;

int main(){
    
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100 ) + 1;

    cout << "************ NUMBER GUESSING GAME *********** \n";

    do{
        cout << "Enter a number to guess between (1 - 100)";
        cin >> guess;
        tries++;

        if(guess > num){
            cout << "Think lower \n";
        }else if(guess < num){
            cout << "Think higher \n";
        }else{
            cout << "CORRECT! # of tries: " << tries << '\n';
        }

    }while(guess != num);
    
        cout << "***************** GAME ENDS HERE ****************";
    return 0;
}