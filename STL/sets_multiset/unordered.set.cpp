
#include <bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &s){
    for(string value : s){
        cout << value << endl;

    }
   
}

int main(){
    unordered_set<string> s;

    s.insert("abc"); // O(1) insertion time complexity 
    s.insert("fhfg");
    s.insert("asd");
    s.insert("asd");// only store unique element 
    auto it = s.find("abc");//O(1)
    s.erase("abc");
    if(it != s.end()){
        cout << (*it);
    }

    print(s);
    
    return 0;
}