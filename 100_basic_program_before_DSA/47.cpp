// Write a program to check whether a number is an Armstrong number.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int value = n;
    int arm = 0;
    while(n > 0){
        int digit = n % 10;
        arm = arm + (digit * digit * digit);
        n = n / 10;
    }
    if(arm == value){
        cout << "The number is palindrome";
    }else{
        cout << "The number is not a palindrome";
    }
    return 0;
}