//  Write a program to check whether a number is a palindrome and a prime at the same time.

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    
    if(n < 2){
        return false;
    }

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;

        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int value = n;
    int rev = 0;
    while(n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(rev == value && isPrime(value)){
        cout << "Number is palindrome and prime :" ;
    }else{
        cout << "Number is not palindrome and prime ";
    }
    return 0;
}

