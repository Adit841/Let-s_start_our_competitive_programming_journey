// Write a program to display the multiplication table of a number n

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= 10; i++){
        cout << n * i << endl;
    }
    return 0;

}