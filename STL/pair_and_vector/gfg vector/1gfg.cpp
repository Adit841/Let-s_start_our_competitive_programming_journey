#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " " ;
    }
    cout << endl;
    for (auto x : v){
        cout << x << " ";
    }
    cout << endl;
    for(auto it = v.begin(); it != v.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;

    for (auto it = v.rbegin(); it != v.rend(); it++){
        cout << (*it) << " ";
    }
    cout << endl;
    v.pop_back();
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
    cout << v.front() << " ";
    cout << endl;
    cout << v.back() <<" ";
    cout << endl;
    v.insert(v.begin(), 100);
    v.insert(v.begin() + 2, 300);
    v.insert(v.begin(), 2,200);

    for(int x : v){
        cout << x << " ";
    }

    v.erase(v.end());
    //v.clear() == it clear the alll vector values
    //v.empty() == it tells if the vector is empty or not gives booean values
    
    return 0;

}