//Bubble Sort = Time Complexity = O(n^2) Worst and Average  and for Best it will be O(n)

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = 0; i <n; i++){
        int didSwap = 0;
        for(int j =0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap++;
            }
        }
        if(didSwap == 0){
            return ;
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);

    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}