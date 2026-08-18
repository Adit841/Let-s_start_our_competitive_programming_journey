// Write a program to find the value of x raised to the power y without using inbuilt power.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y;
    cin >> x >> y;
    int power = 1;

    for(int i = 1; i <= y; i++){
        power  = power * x;
    }

    cout << power ;
    return 0;
}
