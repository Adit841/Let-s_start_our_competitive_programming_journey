//  Write a program to search for an element in an array (linear search).

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int number;
    bool is_found = false;
    cin >> number;
    for(int i= 0; i < n; i++){
        if(number == arr[i]){
            is_found = true;
            break;
        }
    }
    if(is_found){
        cout << "Number found";
    }else{
        cout << "Number not found";
    }
    return 0;
}
