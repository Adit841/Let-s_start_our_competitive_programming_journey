// Write a program to find the sum of the series 1 + 2 + 3 + ... + n.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}