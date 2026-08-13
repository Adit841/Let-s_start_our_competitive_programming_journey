//Write a program to display all natural numbers from 1 to n in reverse order

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n > 0){
        cout << n << endl;
        n--;
    }
    return 0;
}