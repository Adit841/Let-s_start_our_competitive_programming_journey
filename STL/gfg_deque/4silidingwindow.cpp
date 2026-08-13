// Problem Statement: We are given an array "arr" and an integer 'k'. The task is to create a function that takes an array, the size of an array, and k as arguments and prints the maximum element of each k-size subarray.
// Sample Problem : Sliding Window Maximum
// Approach - 2


#include<bits/stdc++.h>
using namespace std;

void printMax(int arr[], int n, int k){
    deque<int> dq;

    for(int i = 0; i < k; i++){
        while(!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }

    for(int i = k; i < n; i++){
        cout << arr[dq.front()] << " ";

        while(!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
        while(!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }

    cout << arr[dq.front()] << " ";
}

int main(){
    int arr[] = {10,8,5,12,15,7,6};
    int k = 3;
    printMax(arr, 7, k);
    return 0;
}

/*
    Time Complexity: O(n)
    Each element is added and removed from the deque at most once.
    Space Complexity: O(k)
    Deque stores at most k indices. 
*/