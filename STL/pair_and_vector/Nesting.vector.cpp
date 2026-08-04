#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    
    // cout << "size : " << v.size() << endl;
    // for(int i =0; i < v.size(); i++){
    //   cout << v[i].first << " " << v[i].second << endl;
    // }
    // cout << endl;

    cout << "size : " << v.size() << endl;
    for(int i =0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    
    // vector<pair<int,int>> v;
    // v = {{1,2},{3,4},{5,6},{7,8}};

    // printVec(v);

    // int N;
    // cout << "Enter value of N : ";
    // cin >> N;
    // vector<int> v[N];
    // for(int i = 0; i < N; i++){
    //     int n;
    //     cout << "Enter value of internal n: ";
    //     cin >> n;
    //     for(int j = 0; j < n; j++){
    //         cout << "Enter value of x: ";
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }

    // for(int i = 0; i < N; ++i){
    //     printVec(v[i]);
    // }


     int N;
    cout << "Enter value of N : ";
    cin >> N;
    vector<vector<int>> v;
    for(int i = 0; i < N; i++){
        int n;
        cout << "Enter value of internal n: ";
        cin >> n;
        vector<int> temp;
        for(int j = 0; j < n; j++){
            cout << "Enter value of x: ";
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i = 0; i < v.size(); ++i){
        printVec(v[i]);
    }
    return 0;
}