/*
    Sample Problem: Reverse a String using stack
    
    Problem Statement:
    When tasked with reversing a string, the stack data structure proves to be highly useful. A stack follows the LIFO (Last In, First Out) principle, which means that the last item inserted into the stack is the first one to be removed. This behavior can be leveraged to reverse the order of characters in a string.

*/
#include<bits/stdc++.h>
using namespace std;

    void reverseString(string &str){
        stack <char> s;
        for(int i = 0 ; i < str.length(); i++){
            s.push(str[i]);
        }

        for(int i = 0; i < str.length(); i++){
            str[i] = s.top();
            s.pop();
        }
    }

int main(){
    string str = "Geeksforgeks";

    reverseString(str);

    cout << str;
    return 0;
}