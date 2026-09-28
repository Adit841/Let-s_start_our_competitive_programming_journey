#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A = {1,1,2,3,4,5};
    vector<int> B = {2,2,3,4,5,6};
    int n1 = A.size();
    int n2 = B.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i < n1 && j < n2){
        if(A[i] <= B[j]){
            if(unionArr.size() == 0 || unionArr.back() != A[i]){
                unionArr.push_back(A[i]);
            }
            i++;
        }else{
           if(unionArr.size() == 0 || unionArr.back() != B[j]){
                unionArr.push_back(B[j]);
            }
            j++;
        }
    }
    while(i < n1){
        if(unionArr.size() == 0 || unionArr.back() != A[i]){
                unionArr.push_back(A[i]);
            }
            i++;
    }
    while(j < n2){
         if(unionArr.size() == 0 || unionArr.back() != B[j]){
                unionArr.push_back(B[j]);
            }
            j++;
    }

    for(int i = 0; i < unionArr.size(); i++){
        cout << unionArr[i] << " " ;
    }
    return 0;
}