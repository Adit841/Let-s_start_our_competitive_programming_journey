#include<iostream>
using namespace std;

int main(){
    /*
    pointers = Variable that stores a memory address of another variable sometimes it's easier to work with an address
        &= address of operator
        *= dereference operator
    */

    string name = "Adotya";
    int age = 21;
    string freePizza[] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizza = freePizza;


    cout << *pName <<'\n';
    cout << *pAge  <<'\n';
    cout << *pFreePizza;
    return 0;
}