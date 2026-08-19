//  Write a program to find the sum of digits of a number repeatedly until a single digit remains.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n >= 10){

    int sum = 0;
        while(n > 0){
            sum = sum + n % 10;
            n = n / 10;
        }
        n = sum;
    }
    cout << n;
    return 0;
}
