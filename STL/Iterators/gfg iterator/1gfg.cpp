#include<iostream>
using namespace std;
#include<vector>

int main(){

    vector<int> v = {1,2,3,4};
    vector<int> :: iterator it = v.begin();

    cout << (*it) << endl;
    it++;
    cout << (*it) << endl;

    it = v.end();
    it--;
    cout << (*it) << endl;

    return 0;

}