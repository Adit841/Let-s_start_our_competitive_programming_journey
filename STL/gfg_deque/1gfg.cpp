/*
    A deque in C++ supports insertion and deletion at both the front and back, combining features of stacks and queues. Unlike typical implementations, C++ STL deque also allows random access like arrays and provides O(1) time insertion at both ends.


    
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq = {10,20,30};
    dq.push_front(1);
    dq.push_back(2);

    for (auto x : dq){
        cout << x << " ";
    }
    auto it = dq.begin();
    cout << "First element: " << *it << endl;
    //dq.insert(it, 5);
    //dq.pop_front();
    //dq.pop_back();
    //dq.size();
    //

    return 0;
}

// Deques support O(1) time for push_front, push_back, pop_front, and pop_back.