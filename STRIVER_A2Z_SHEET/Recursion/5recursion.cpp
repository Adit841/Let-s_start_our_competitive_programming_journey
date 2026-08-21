#include<bits/stdc++.h>
using namespace std;

//Fibonaaci series with multiple recursion calls = 0,1,1,2,3,5,8....
// Time Complexity = O(2^n)

int fibonaaci(int n){
    if(n <= 1){
        return n;
    }
    // int last = (n - 1);
    // int slast = (n - 2);
    return fibonaaci(n - 1) + fibonaaci(n - 2);
    // return last + slast;
}

int main(){
    int n;
    cin >> n;

    cout << fibonaaci(n);
    return 0;
}