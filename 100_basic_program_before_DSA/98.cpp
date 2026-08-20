//  Write a program to convert a decimal number into its binary equivalent.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d;

    while(n > 0){
        d.push_back(n % 2);
        n = n / 2;
    }

    for(int i = 0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    return 0;
}
