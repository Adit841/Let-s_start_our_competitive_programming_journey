// Write a program to replace all zeros in a number n with the digit 5

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int rev = 0;
    while(n > 0){
        int digit  = n % 10;
        if(digit == 0){
            digit = 5;
        }
         rev = rev * 10 + digit;
        n = n / 10;
    }
    int a = 0 ;
    while(rev > 0){
        int d = rev % 10;
        a = a * 10 + d;
        rev = rev / 10;
    }
    cout << a;
    return 0;
}

/*
    A BETTER APPROACH FOR THE WITH ONE LOOP BY DOING 
    3 × 1
    5 × 10
    2 × 100
    5 × 1000
    1 × 10000
    3 + 50 + 200 + 5000 + 10000
    = 15253

    int n;
    cin >> n;
    int ans = 0;
    int place = 1;

    while(n > 0){
        int digit = n % 10;
        if(digit == 0){
        digit = 5;
        }
        ans = ans + digit * place;

        place = place * 10;
        n = n / 10;

    }
        cout << ans 
*/