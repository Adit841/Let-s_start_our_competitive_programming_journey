#include<iostream>
using namespace std;

int main(){
    
    int rows;
    int column;
    char symbol;

    cout << "How many rows :";
    cin >> rows;

    cout << "How many columns :";
    cin >> column;

    cout << "Enter the symbol : ";
    cin >> symbol;

    for(int i = 1; i <=rows; i++){
        for(int j =1; j <= column; j++){
            cout << symbol;
        }
        cout << '\n';
    }
    return 0;
}