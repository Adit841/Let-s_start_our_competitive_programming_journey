//  Write a program to count the frequency of each element in an array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,2,4,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int freq[100] = {0};

    for(int c : arr){
        freq[c]++;
    }

    for(int i = 0; i < 100; i++){
        if(freq[i] > 0){
            cout << i << " = " << freq[i] << endl;
        }
    }
    return 0;
}
