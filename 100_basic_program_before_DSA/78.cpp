//  Write a program to replace all occurrences of a character with another character in a string.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int freq[256] = {0};

    for(char &ch : s){
        freq[ch]++;

         if(freq[ch] % 2 == 0){
            ch = '@';
        }
    }

    cout << s;
    return 0;
}
