// Write a program to read a number and check whether it is prime or not.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int is_prime = 0;

    for(int i = 2; i < n; i++){
        if(n % i ==0){
            is_prime++;
            break;
        }
    }
    if(is_prime == 1){
        cout <<"The number is not a prime:";
    }else {
        cout << "The number is prime.";
    }
    return 0;
}