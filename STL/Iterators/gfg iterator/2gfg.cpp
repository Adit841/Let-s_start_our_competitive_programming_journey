/* next() and prev() = next() function returns the iterator that is a specified number of positions ahead of the given iterator or if we do not provide a number then it returns one next position to the iterator.

prev() function returns the iterator that is a specified number of positions behind the given iterator or if we do not provide a number then it returns one previous position to the iterator.
*/
#include<iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> v = {10,20,30,40,50};
    vector<int> :: iterator it = v.begin();

    it = next(it);
    cout << (*it)  << endl;


    it = next(it,2);
    cout << (*it) << endl;

    it  = prev(it);
    cout << (*it) << endl;
    return 0;
}