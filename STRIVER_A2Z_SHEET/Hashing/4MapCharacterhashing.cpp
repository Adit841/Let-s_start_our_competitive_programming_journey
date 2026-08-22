#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "sfdafdsfsaf";
    map<char,int> mpp;
    for(int i =0; i < s.length(); i++){
        mpp[s[i]]++;
    }
    //iterate over the map
    for(auto it : mpp){
        cout << it.first << "--->" << it.second << endl;
    }

    // char q;
    // cin >> q;
    // while(q--){
    //     int number;
    //     cin >> number;

    //     cout << mpp[number] << endl;;
    // }
    return 0;
}