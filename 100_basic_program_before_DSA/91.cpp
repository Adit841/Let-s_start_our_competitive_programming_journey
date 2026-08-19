// Write a program to find the sum of all even-indexed and odd-indexed elements separately.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int even_indexed = 0;
    int odd_indexed = 0;

    for(int i =0; i < n; i++){
        if(i % 2 == 0){
            even_indexed = even_indexed + arr[i];
        }else{
            odd_indexed = odd_indexed + arr[i];
        }
    }
    cout << "Even Index sum : " << even_indexed << endl;
    cout << "Odd Index sum : " << odd_indexed << endl;
    return 0;
}
