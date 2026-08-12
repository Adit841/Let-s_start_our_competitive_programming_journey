// Write a program to read the age of a person and check whether they are eligible to vote

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if( n >= 18){
        cout << "Person is eleigible to vote ";
    }else {
        cout <<"Person is not eligible to vote ";
    }
    return 0;
}