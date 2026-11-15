#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,3,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int xor1 = 0;
    for(int i = 0 ; i < n; i++){
        xor1 = xor1 ^ arr[i];
    }

    cout << "The the number apperance once is: "<< xor1;
    return 0;
}