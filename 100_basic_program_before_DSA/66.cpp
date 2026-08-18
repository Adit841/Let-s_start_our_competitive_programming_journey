// Write a program to print a number triangle (row i contains numbers 1 to i).

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <=i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}
