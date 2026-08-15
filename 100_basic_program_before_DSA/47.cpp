// Write a program to check whether a number is an Armstrong number.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int value = n;
    int v = n;
    int arm = 0;
    int numberOfDigits = 0;
    while(n > 0){
        int d = n % 10;
        numberOfDigits++;
        n = n / 10;
    }
    while(value > 0){
        int digit = value % 10;
        arm = arm + pow(digit, numberOfDigits);
        value = value / 10;
    }
    if(arm == v){
        cout << "The number is palindrome";
    }else{
        cout << "The number is not a palindrome";
    }
    return 0;
}