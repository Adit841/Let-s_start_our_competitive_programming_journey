// Write a program to find the sum of the first n terms of the Fibonacci series.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum = 0;
    int a = 0;
    int b = 1;
    for(int i = 1; i <= n; i++){
        sum = sum + a;

        int next = a+b;
        a = b;
        b = next;
    }
    cout << sum << endl;
    return 0;
}