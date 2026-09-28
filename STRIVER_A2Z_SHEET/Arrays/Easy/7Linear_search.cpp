#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,24,4,12,3};
    int x = 3;
    bool isPresent = false;
    int i;
    for(i = 0;  i < arr.size(); i++){
        if(x == arr[i]){
            isPresent = true;
        }
    }

    if(isPresent){
        cout << "The desired valus is at this indez : " << i << endl;
    }else{
        cout << "The desired value is not present";
    }
    return 0;
}