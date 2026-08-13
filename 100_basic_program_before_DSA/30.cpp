//Write a program to display all multiples of a number m up to n terms.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m , n;
    cin >> m >> n;
    for(int i = 1 ; i <=n ; i++){
        cout << m * i << " ";
    }

    return 0;

}