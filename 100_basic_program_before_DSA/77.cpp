//  Write a program to find the first non-repeating character in a string.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int freq[256] = {0};

    for(char ch : s){
        freq[ch]++;
    }

    for(char ch : s){
        if(freq[ch] == 1){
            cout << ch;
            break;
        }
    }
    return 0;
}
