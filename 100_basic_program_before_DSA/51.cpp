//Write a program to check whether a number is an automorphic number.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int original = n;
    int square = n * n;

    int temp = n;
    int digit = 0;
    
    while(temp > 0){
        digit++;
        temp = temp / 10;
    }

    int divisor = pow(10, digit);

    if(square % divisor == original){
        cout << "It's an automorphic number";
    }else{
        cout << "It's not an autpmorphoc number";
    }
    return 0;
}