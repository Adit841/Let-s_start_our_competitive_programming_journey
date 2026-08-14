// Write a program to count the number of even digits and odd digits in a number n.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int even_digits =  0;
    int odd_digits = 0;

    while(n > 0){
        int digit  = n % 10;
        if(digit % 2 == 0){
            even_digits++;
        }else if(digit % 2 != 0){
            odd_digits++;
        }
        n = n /10;
    }

    cout << "The total number of even is : " << even_digits << endl;
    cout << "The total number of odd is : " << odd_digits << endl;
    
    return 0;
}