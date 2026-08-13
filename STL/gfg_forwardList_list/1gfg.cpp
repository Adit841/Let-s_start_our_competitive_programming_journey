#include<bits/stdc++.h>
using namespace std;

int main(){

    forward_list<int> list = {10,15,20};
    list.push_front(5);
    list.push_front(25);
    list.push_front(52);
    list.pop_front();
    list.remove(10);
    list.assign({223,334,556,223});
    list.remove(223);

    forward_list<int> list2;
    list2.assign(list.begin(), list.end());
    list2.assign(5,10);

    auto it = list2.insert_after(list2.begin(), 10);
    it = list2.insert_after(it, {2,3,4});
    it =  list2.emplace_after(it,40);
    it = list2.erase_after(it);
    // it.clear();
    // it.empty();
    // it.reverse();
    // it.merge(123);
    // it.sort();

    for(int x : list2){
        cout << x <<" ";
    }
    return 0;
}

/*
    Time complexities-:
            Operation	    Time Complexity
            insert_after    (1 element)	O(1)
            insert_after    (m elements)	O(m)
            erase_after     (1 element)	O(1)
            erase_after     (m elements)	O(m)
            push_front	    O(1)
            pop_front	    O(1)
            reverse	        O(n)
            sort	        O(n log n)
            remove	        O(n)
            assign          (1 element)	O(1)    
            assign          (m elements)	O(m

*/