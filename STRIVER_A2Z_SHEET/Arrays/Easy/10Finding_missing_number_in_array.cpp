#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = n * (n + 1) / 2;
    int s2 = 0;
    for(int i =0 ; i < n; i++){
        s2 += arr[i];
    }
    cout << "Missing number is: " << sum - s2;
    return 0;
}

// other solution 
/*
    int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int xor1 = 0, xor2 = 0;
    int n = N-1;
    for(int i = 0 ; i < n; i++){
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i+1);
    }   
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}
*/