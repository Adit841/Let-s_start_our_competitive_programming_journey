/*
    Sample Problem: Keep track of previous indexes after sorting a Vector
    -> Given an array of integers, the task is to create a function that takes the array as an argument and prints the array in increasing order along with its original index before sorting.
*/
#include<bits/stdc++.h>
using namespace std;

void printSortedWithIndex(int arr[], int n){
     vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        v.push_back({arr[i], i});
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i].first << " "<< v[i].second << endl;
    }
}
int main(){
    int arr[] = {23,34,56,2};
    printSortedWithIndex(arr, 4);
    return 0;
}