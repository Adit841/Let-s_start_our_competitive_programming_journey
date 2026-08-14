// Write a program to display all the digits of a number n (one per line).
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int show;
    while(n > 0){
        show =  n % 10;
        cout << show << endl;
        n = n / 10;
    }
    return 0;
}