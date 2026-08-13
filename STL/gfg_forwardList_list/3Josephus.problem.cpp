/*                    ||  Josephus Problem ||
    Problem Statement: There are n people standing in a circle, each numbered from 0 to n-1. In each iteration, we need to kill a kth person, initially count starts from the 0th person. This process repeats, with the next count beginning immediately after the eliminated person and continues until only one individual remains.
*/

#include<bits/stdc++.h>
using namespace std;


    int getSurv(int n, int k){
        list<int> l;
        for(int i = 0; i < n; i++){
            l.push_back(i);
        }
        auto it = l.begin();
        while(l.size() > 1){
            for(int count = 1; count < k; count++){
                it++;
                if(it == l.end()){
                    it = l.begin();
                }
            }
            it = l.erase(it);
            if(it == l.end()){
                it = l.begin();
            }
        }
        return *l.begin();
    }
int main(){
    cout << getSurv(7,3);
    return 0;
}