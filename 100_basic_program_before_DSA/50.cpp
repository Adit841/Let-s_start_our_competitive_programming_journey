//Write a program to check whether a number is a strong number (sum of factorials of its digits).

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int value = n;
    
    int sum = 0;
    while(n > 0){
        int digit = n % 10;

        int fact = 1;
        while(digit > 0){
            fact = fact * digit;
            digit--;
        }

            sum  = sum + fact;
        n = n /10;
    }

    if(sum == value){
        cout << "Number is strong number";
    }else{
        cout << "Number is not strong number";
    }
    
    return 0;
}