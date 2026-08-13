// Write a program to find the product of all natural numbers from 1 to n (factorial of n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    cout << fact;
    return 0;
}