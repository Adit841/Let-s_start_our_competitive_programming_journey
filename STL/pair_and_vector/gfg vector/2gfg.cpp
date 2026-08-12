/*
    Tiime Complexities of different operations and passing Vectors to function comments

    This article lists the common vector operations and their time complexities:

    O(1) Operations
        These operations execute in constant time, regardless of the vector’s size:

        front(), back(): Access the first and the last element.
        empty(), size(): Check if empty or get size.
        begin(), end(): Return iterators to the start/end.
        push_back(), pop_back(): Append/remove the last element.
        push_back(): O(1) but in worst cases it's O(n).
        pop_back(): O(1) but may involve destructor calls for non-trivial types


    O(n) Operations
        These operations scale linearly with the vector’s size:

        insert(), erase(): Inserting or removing elements at arbitrary positions requires shifting subsequent elements.
        resize(): Adjusting size may involve copying elements to new memory

    
*/