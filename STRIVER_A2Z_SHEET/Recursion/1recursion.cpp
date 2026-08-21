// Recursion = Recursion is a programming technique where a function calls itself to solve a problem by breaking it into smaller versions of the same problem. The function keeps calling itself until it reaches a base case, which tells it when to stop.
#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void print(){
    if(cnt == 3) return; // base case
    cout << cnt << endl;
    cnt++;
    print(); // recursive call 

}
int main(){
    print();
    return 0;
}