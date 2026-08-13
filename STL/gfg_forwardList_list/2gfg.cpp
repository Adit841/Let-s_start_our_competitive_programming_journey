#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(5);
    for(int x : l) {
        cout << x << " ";
    }
    cout << endl;

    l.pop_front();
    l.pop_back();
    for(int x : l) {
        cout << x << " ";
    }
    cout << endl;

    //l.insert();
    //l.front();
    //l.back();
    //l.erase(it); =>  function takes an iterator and removes the element that is pointed by iterator. It returns an iterator that points to the element just after the deleted element.
    //l.remove(n); =>  function takes a value as a key and deletes all occurrences of that value.
    //l.merge(l2); =>  This function is used to merge two sorted lists into one list.
    //l.unique() => 
    //l.sort() => 
    //l.reverse() => 

    return 0;
}


/*
    Function	    Description	                                        Time Complexity
    front()	        Returns element at the front.	                    O(1)
    back()	        Returns element at end.	                            O(1)
    size()	        Returns the size of the List.	                    O(1)
    begin()	        Returns iterator pointing to the first element.	    O(1)
    end()	        Returns iterator pointing to the last element.	    O(1)
    erase(it)	    Erases element pointed by it	                    O(1)
    push_front()	Insert an element at the front of the list.	        O(1)
    push_back()	    Insert an element at the back.	                    O(1)
    pop_front()	    Removes an element from the front.	                O(1)
    pop_back()	    Removes an element from the end.	                O(1)
    reverse()	    Reverses the list.	                                O(N)
    remove()	    Removes all occurrences of a particular element.	O(N)
    unique()        Removes all duplicate consecutive elements          O(N)
    sort()	        Sorts the linked list.	O(N*logN







*/