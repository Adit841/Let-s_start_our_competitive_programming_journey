//  Write a program to find the largest and smallest element in an array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr [] = {123,2342,3423,23423,2,4,224,23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = 0;
    int smallest = arr[0];

    for(int i = 0; i < n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    cout << "Largest is: " << largest << endl;
    cout << "Smallest is: " << smallest << endl;
    return 0;
}
