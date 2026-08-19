//  Write a program to remove all spaces from a string.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(char ch : s){
        if(ch != ' '){
            cout << ch;
        }
        
    }
    
    return 0;
}
