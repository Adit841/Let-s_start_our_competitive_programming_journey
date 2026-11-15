#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,0,0,0,1,1,1,1,1,0,0,1,0};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int counter = 0, max = 0;
    for(int i = 0; i < n; i ++){
        if(arr[i] == 1){
            counter++;
            if(counter > max){
                max = counter;
            }
        }
        else{
            counter = 0;
        }
    }

    cout << "The max consecutives one are: " << max;

    return 0;
}