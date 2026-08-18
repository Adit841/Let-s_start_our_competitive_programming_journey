// 70. Write a program to count the number of words in a sentence.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    // cout << s.length()<<endl;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        count++;
    }
    cout << count ;
    return 0;
}
