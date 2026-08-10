#include<bits/stdc++.h>
using namespace std;

void print(map <int,string> &m){
    cout << m.size() << endl;
     for(auto &pr : m){ // easy use of auto instead of itereator 
        cout << pr.first << " " << pr.second << endl; 
    }
}

int main(){
    // these map use inbuilt tree

    map<int, string> m;
    m[1] = "aditya"; // O(log(n))
    m[5] = "adi";
    m[3] = "adit";
    m.insert({4, "ait"});
    
    // map<int, string> :: iterator it;
    // for(it = m.begin(); it !=m.end(); ++it){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    
    auto it = m.find(9);//O(log(n))
    // m.erase(3);
    // m.clear();
    // if(it == m.end()){
    //     cout << "NO value";
    // }else{
    //     cout<< (*it).first << " " << (*it).second;
    // }
    
    print(m);
   
    return 0;
}