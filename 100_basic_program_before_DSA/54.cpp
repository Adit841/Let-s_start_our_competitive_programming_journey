// Write a program to count the number of factors of a number n.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    cout << "The total factor of a number " << n << " is " << count;
    return 0;
}