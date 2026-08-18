// Write a program to print an inverted right-angled triangle pattern of stars of height n.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}