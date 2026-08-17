//Write a program to check whether a number is a Harshad (Niven) number.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int original = n;
    int sum = 0;

    while(n > 0){
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    if(original % sum == 0){
        cout << "It is a Harshad number";
    }
    else{
        cout << "It is not a Harshad number";
    }

    return 0;
}