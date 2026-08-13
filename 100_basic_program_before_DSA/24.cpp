// Write a program to display all odd numbers from 1 to n.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i=i+2){
        cout << i << " ";
    }
    return 0;
}