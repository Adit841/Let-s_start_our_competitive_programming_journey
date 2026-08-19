//  Write a program to find the sum and average of all elements in an array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {234,34,234,2342,4321,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    double sum = 0.0;
    double average = 0.0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    average = sum / n;
    cout << "Sum of array is :" << sum << " Average of array is: " << average ;
    return 0;
}
