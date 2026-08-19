//  Write a program to find the second largest element in an array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i =1; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    cout << "Second largest: " << secondLargest << endl;
    cout << "Largest: " << largest << endl;
    return 0;
}
