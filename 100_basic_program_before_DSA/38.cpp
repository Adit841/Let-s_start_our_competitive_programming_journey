// Write a program to find the largest digit in a number n.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int largest = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit > largest){
            largest = digit ;
        }
        n = n / 10;
    }
    cout << "The largest value is :"<< largest;
    return 0;
}