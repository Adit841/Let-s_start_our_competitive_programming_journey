// Problem Statement: We are given an array "arr" and an integer 'k'. The task is to create a function that takes an array, the size of an array, and k as arguments and prints the maximum element of each k-size subarray.
// Sample Problem : Sliding Window Maximum
// Approach - 1


#include<bits/stdc++.h>
using namespace std;

void printMax(int arr[], int n, int k){
    for(int i = 0; i < n - k + 1; i++){
        int mx = arr[i];
        for(int j = i + 1; j < i + k; j++){
            mx = max(arr[j], mx);
            
        }
        cout<< mx << " ";
    }
}


int main(){
    int arr[] = {10,8,5,12,15,7,6};
    int  k = 3;
    printMax(arr, 7, k);
    return 0;
}