//advance() = This function is used to move to the iterator n position ahead. It not return any iterator like next() function, it just modify the passing iterator.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {10,20,30,40,50};
    vector<int> :: iterator it = v.begin();
    advance(it, 3);
    cout << (*it) << endl;
    return 0;
}