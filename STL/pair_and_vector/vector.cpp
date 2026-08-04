#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    
    cout << "size :" << v.size() << endl;
    for(int i =0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    v.push_back(2);
    cout << endl;
}

int main(){
    /*
        A vector represents a dynamic sized array in the Standard Template Library(STL) that automatically grows when elements are added beyond current capacity.

        A programmer does not have to worry about maintaining the capacity and allocating extra space initially.
        Certain insertions and removals can become slightly costly in terms of time as it internally resizes itself beyond certain predefined limits. If time taken for these operations is super critical, then use of plain arrays in C++ should be preferred.
        Vectors support bound checking by using v.at(i) for accessing an element at index i in a vector v.
    */

    vector<int> v;
    v.push_back(7);
    v.push_back(8);

    vector<int> &v2 = v;
    v2.push_back(5);
    printVec(v); 
    printVec(v); 
    printVec(v2); 


    return 0;
}