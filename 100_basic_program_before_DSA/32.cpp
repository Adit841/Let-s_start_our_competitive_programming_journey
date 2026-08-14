//Write a program to display all numbers from 1 to n that are divisible by 3 or 5

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout << i <<  " ";
        }
    }
    return 0;
}