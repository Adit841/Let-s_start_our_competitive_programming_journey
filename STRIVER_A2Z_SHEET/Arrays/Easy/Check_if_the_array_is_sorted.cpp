#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i] ;
    }
    bool sorted = true;// [1,2,3,4,5]
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] >= arr[i + 1]){
                sorted = false;
                break;
            }
    }
    if(sorted){
        cout << "Array is sorted";
    }else{
        cout << "Array is not sorted";
    }
    return 0;
}