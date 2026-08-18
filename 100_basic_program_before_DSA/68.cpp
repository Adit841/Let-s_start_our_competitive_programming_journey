//  Write a program to find the length of a string without using an inbuilt function.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    // cout << s.length()<<endl;
    int count = 0;
    for(char c : s){
        count++;
    }
    cout <<"The length of a string " << count ;
    return 0;
}