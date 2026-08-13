//Write a program to find the sum of all even numbers from 1 to n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i <= n; i = i+ 2){
        sum = sum + i;
    }
    cout << sum;
    return 0;
}