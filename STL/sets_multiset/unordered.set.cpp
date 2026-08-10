
#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value : s){
        cout << value << endl;

    }
   
}

int main(){
    set<string> s;

    s.insert("abc"); // log(n) insertion time complexity 
    s.insert("fhfg");
    s.insert("asd");
     s.insert("asd");// only store unique element 
    auto it = s.find("abc");//log(n)
    s.erase("abc");
    if(it != s.end()){
        cout << (*it);
    }

    print(s);
    
    return 0;
}