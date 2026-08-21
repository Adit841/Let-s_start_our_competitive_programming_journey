#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "afsjfsajfgbsgf";
    int hash[256] = {0};

    for(char c : a){
        hash[c]++;
    }

    for(int i = 0; i < 256; i++){
        if(hash[i] > 0){
        cout << char(i ) << "=" <<  hash[i] << endl;
        }
    }
    return 0;
}
