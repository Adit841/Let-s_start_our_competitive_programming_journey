//  Write a program to toggle the case of each character in a string.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(char &ch : s){
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch + 32;
        }else if(ch >= 'a' && ch <= 'z'){
            ch = ch - 32;
        }
    }
    cout << s;
    return 0;
}
