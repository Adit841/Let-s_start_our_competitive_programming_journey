// Write a program to find the sum of the series 1^2 + 2^2 + 3^2 + ... + n^2.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++){
        int square = pow(i,2);
        sum = sum + square;
    }
    cout << sum;
    return 0;
}