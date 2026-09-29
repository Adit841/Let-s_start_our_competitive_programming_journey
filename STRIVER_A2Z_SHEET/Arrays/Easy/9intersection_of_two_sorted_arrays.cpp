#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A = {1,2,2,3,3,4,5,6};
    vector<int> B = {2,3,3,5,6,6,7};
    int n1 = A.size();
    int n2 = B.size();
    vector<int> ans;
    int i = 0, j = 0;

    while(i < n1 && j < n2){
        if(A[i] < B[j]){
            i++;
        }else if(B[j] < A[i]){
            j++;
        }else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    
    for(int i =0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}