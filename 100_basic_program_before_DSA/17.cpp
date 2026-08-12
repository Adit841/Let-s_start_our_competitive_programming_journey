// Write a program to read a character and check whether it is an alphabet, digit or special symbol.

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a value: ";
    cin >> ch;

    if((ch >= 'a' && ch <= 'z') || (ch >='A' && ch <= 'Z')){
        cout <<"it is an alphabet";
    }else if(ch >= '0' && ch <= '9' ){
        cout << "It is a digit";
    }else{
        cout << "It is a special symbol";
    }
    return 0;
}