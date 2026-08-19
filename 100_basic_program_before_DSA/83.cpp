//  Write a program to count the number of even and odd elements in an array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,7,6,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even_count = 0;
    int odd_count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even_count++;
        }else{
            odd_count++;
        }
    }
    cout << "Total even number: " << even_count << endl;
    cout << "Total odd number: " << odd_count << endl;
    return 0;
}
