//  Write a program to reverse a string.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string c;
    for(int i = s.length() - 1; i >=0 ; i--){
        c = c + s[i];
    }
    cout << c;
    return 0;
}
