/*
    C++ STL has an in-built container adaptor which implements the stack data structure internally. We can directly use this container to implement stacks in our programs and perform a number of operations available.

    Insertion and Deletion in a stack are done from a single end which is the rear end of the stack data structure.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack size : " << s.size() << endl;
    cout << "Top element: " << s.top() << endl;
    while(!s.empty()){
        cout << s.top() << " ";

        s.pop();
    }
    // s.pop();
    // cout << "Top after pop : " << s.top() << endl;
    return 0;
}

