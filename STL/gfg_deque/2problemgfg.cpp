// Sample Problem: Design a Data Structure with Min/Max operations in O(1) time


#include<bits/stdc++.h>
using namespace std;

deque<int> dq;

void insertMin(int x){
    dq.push_front(x);
}

void insertMax(int x){
    dq.push_back(x);
}

int getMin(){
    return dq.front();
}
int getMax(){return dq.back();}

int extractMin(){ dq.pop_front();}
int exractMax() {dq.pop_back(); }

int main(){
    insertMin(5);
    insertMax(10);
    insertMin(3);
    insertMax(15);
    insertMin(2);

    cout << getMin() << endl;
    cout << getMax() << endl;
    return 0;
}