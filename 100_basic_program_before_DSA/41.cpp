//Write a program to check whether a number n is a palindrome (reads the same reversed).

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int value = n;
    int reverse = 0;
    while(n > 0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(reverse == value){
        cout << "The number is Palindrome.";
    }else {
        cout << "The number is not a palindrome.";
    }
    return 0;
}