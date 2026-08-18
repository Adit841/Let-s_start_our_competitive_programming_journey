//  Write a program to convert a string to uppercase and lowercase without inbuilt case functions.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string upper = s;
    string lower = s;
    for(int i = 0; i  < s.length(); i++){
        if(upper[i] >= 'a' && upper[i] <= 'z'){
            upper[i] = upper[i] - 32;
        }

        if(lower[i] >= 'A' && lower[i] <= 'Z'){
            lower[i] = lower[i] + 32;
        }
    }
    cout <<"Upper Case :" << upper << endl;
    cout <<"Lower case :" << lower << endl;
    return 0;
}
