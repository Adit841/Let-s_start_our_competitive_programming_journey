#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int,int> mpp; // we can use unordered_map here the out put will not be in sorted manner 
    for(int i =0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    //iterate over the map
    for(auto it : mpp){
        cout << it.first << "--->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;

        cout << mpp[number] << endl;;
    }
    return 0;
}

// Time complexities = map(insert,fetch) = best,average,worst = O(logn)
// Time complexities = unorded_map(insert,fetch) = best,average = O(1) worst = O(n);