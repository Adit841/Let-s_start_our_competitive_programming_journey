//  Write a program to find the largest and smallest number that can be formed using the digits of n.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> digit;
    while(n > 0){
        digit.push_back(n % 10);
        n = n / 10;
    }

    sort(digit.begin(), digit.end());

    cout << "Smallest: ";
    for(int i = 0; i < digit.size(); i++){
        cout << digit[i];
    }
    cout << endl;

    cout << "Biggest: ";
    for(int i = digit.size() - 1; i >= 0; i--){
        cout << digit[i];
    }
    return 0;
}
