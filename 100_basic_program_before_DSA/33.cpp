// Write a program to count the number of digits in a number n
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n > 0){
        n % 10;
        count++;
        n = n / 10;
    }
    cout << count ;
    return 0;
}