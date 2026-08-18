//  Write a program to check whether a string is a palindrome.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string c;
    for(int i = s.length() - 1; i>=0 ; i--){
        c = c + s[i];
    }
    if(c == s){
        cout << "String is palindrome.";
    }else{
        cout << "It is not palindrome ";
    }
    return 0;
}
