// Write a program to remove duplicate elements from an array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,2,3,4,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int freq[100] = {0};

    for(int c : arr){

        if(freq[c] == 0){
            cout <<c << " ";
        }
        freq[c]++;

        
    }
    
    return 0;
}
