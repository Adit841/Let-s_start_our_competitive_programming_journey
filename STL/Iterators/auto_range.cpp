#include<bits/stdc++.h>
using namespace std;

int main(){


    vector<int> v = {1,2,3,4,5};
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> :: iterator it = v.begin();
    for(it = v.begin(); it != v.end(); ++it){
        cout << (*it) << endl;
    }

    // for(int &value : v){
    //     value++;
    //     // cout << value << " " ;
    // }
    
    // for(int value : v){
    //     cout << value << " " ;
    // }

    cout << endl;


    auto a = 1.6;
    cout << a << endl;

    vector <pair<int,int>> v_p = {{1,2}, {3,4}};
    for(auto &value : v_p){
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}