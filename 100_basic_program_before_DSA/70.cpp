//  Write a program to count the number of words in a sentence.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);    
    int count = 0;
    int isWord = false;
    for(char c : s){
        if(c != ' ' && !isWord){
            count++;
            isWord = true;
        }else if(c == ' '){
            isWord= false;
        }
    }

    cout << count;
    return 0;
}
