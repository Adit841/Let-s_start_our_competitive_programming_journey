// Write a program to find the smallest digit in a number n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int smallest;
    while(n > 0){
        int digit = n %10;
        if(digit < smallest){
            smallest = digit;
        }
        n = n / 10;
    }
    cout << smallest;
    return 0;
}