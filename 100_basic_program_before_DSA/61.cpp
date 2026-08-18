//  Write a program to find the sum of the series 1 + 1/2 + 1/3 + ... + 1/n.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double sum = 0;
    for(int i = 1; i <=n; i++){
        sum = sum + (1.0/i);
    }
    cout << sum << endl;
    return 0;
}
