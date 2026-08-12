/*
    Problem Statement: Given two arrays where the first array is an integer type, and the second array is a character type. Integer values of an integer array are associated with character values of a character array. The task is to sort the integer array and then print the character array.
*/

#include<bits/stdc++.h>
using namespace std;


void sortChar(int a[], char b[], int n){
    pair<int,char> ba[n];
    for(int i = 0; i < n; i++){
        ba[i] = {a[i],b[i]};
    }
    sort(ba, ba + n);
    for(int i = 0; i <n ; i++){
        cout  << ba[i].second << " ";
    }
}
int main(){
    int a[] = {10,15,5};
    char b[]  = {'X','Y','Z'};
    sortChar(a,b,3);
    return 0;
}