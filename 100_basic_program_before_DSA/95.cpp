//  Write a program to count the number of prime digits present in a number n.

#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;
    cin >> n;

    int count = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit == 2 || digit == 3 || digit == 5 || digit == 7){
            count++;
        }
        n = n / 10;
    }
    cout << count;
    return 0;
}
