/*
    Problem Statement: Given an array of integers and a number K, the task is to find a list of numbers that are smaller than the number K.
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,30,40,50,3,6};
    int k = 10;

    vector<int> v;
    for(int i = 0; i < 7; i++){
        if(k > arr[i]){
            v.push_back(arr[i]);
        }
    }
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}


/*
    Approach:
    1. Create an empty vector.
    2. Traverse the array one element at a time.
    3. If an element is smaller than k, push it into    the vector.
    4. Otherwise, skip it and move to the next element.
    5. Continue until all elements are processed.
*/