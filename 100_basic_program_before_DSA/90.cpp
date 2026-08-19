//  Write a program to merge two arrays into one.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {5,6,7,8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int n = n1 + n2;
    int arr[n];
    for(int i = 0; i < n1; i++){
       arr[i] = arr1[i];
    }
    for(int i = 0; i < n2; i++){
        arr[n1 + i] = arr2[i];
    }

    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
