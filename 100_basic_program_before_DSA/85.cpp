//  Write a program to reverse the elements of an array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int rev[n];
    for(int i = 0; i < n; i++){
        rev[i] = arr[n-i-1];
    }
    for(int i =0; i < n; i++){
        cout << rev[i] << " ";
    }
    return 0;
}
