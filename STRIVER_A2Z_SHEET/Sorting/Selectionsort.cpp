#include<bits/stdc++.h>
using namespace std;
// Time Complexity = O(n^2) Best,Average,Worst
void selection_sort(int arr[], int n){

    for(int i = 0; i <= n -2; i++){
        int min = i;
        for(int j =i; j <= n-1; j++){
            if(arr[min] > arr[j]){
                min = j;
            }

        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

    }
}

int main(){
    int arr[] = {23,2342,2,33,43,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}