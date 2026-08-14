// Write a program to count how many numbers from 1 to n are divisible by 3.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;

    for(int i = 1; i <=n; i++){
        if(i % 3 == 0){
            count = count + 1;
        }
    }
    cout << count ;
    return 0;
}