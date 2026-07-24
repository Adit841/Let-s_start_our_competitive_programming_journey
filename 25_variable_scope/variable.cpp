#include <iostream>
using namespace std;

int myNum = 1;

void num(){
    int myNum = 2;
    cout << myNum << '\n';
}

int main(){

    // Local variable = declared inside a function or block()
    // Global variable = declared outside of all function 
    int myNum = 3;
    num();
    cout << myNum << '\n';

    return 0;

}