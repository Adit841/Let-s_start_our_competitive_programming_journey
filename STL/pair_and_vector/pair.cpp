#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    Pair is a simple container that holds two values together. These two values can be of different types, and they are stored as a single unit.

    The pair container has the following applications.

    Return two values from a function
    Key‐value storage (Used in map and unordered_map)
    Provides lexicographical comparison first compares first item, then second if first is equal and can be useful in sorting.
    */

    pair<int,string> p;
    // p = make_pair(2,"abc");
    p = {2, "abcd"};
    pair<int, string> &p1 = p;
    p1.first = 3;
    // cout << p.first << " " << p.second << endl;
    int a[] = {1,2,3};
    int b[] = {4,5,6};

    pair<int,int> p_array[3];
    p_array[0] = {1,4};
    p_array[1] = {2,5};
    p_array[2] = {3,6};
    swap(p_array[0], p_array[2]);
    for(int i = 0; i < 3; ++i){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    return 0;
}