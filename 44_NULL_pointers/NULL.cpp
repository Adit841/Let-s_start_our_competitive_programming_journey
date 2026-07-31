#include <iostream>
using namespace std;

int main(){
    /*
    NULL value = A special value that means something has no value. When a pointer is holding a null value. that pointer is not pointing at anything (null pointer)

    nullptr = keyword reperensents a null pointer literal null pointer are helpful when determining if an address was succesfully assigned to a pointer


                When using pointers, be careful that your code isn't deferencing null or pointing to free memory this will cause undefined behaviour
    
    */
 
    int *pointer = nullptr;
    int x = 123;

    // pointer = &x;

    if(pointer == nullptr){
        cout << "Did not success";
    }else{
        cout << "assigned address";
        cout << *pointer;
    }
 
    return 0;
}