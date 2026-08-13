//Write a program to find the sum of all odd numbers from 1 to n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <=n ; i = i +2){
        sum = sum + i;
    }
    cout << sum ;
    return 0;
}