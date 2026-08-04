#include<iostream>
using namespace std;

int main(){
    //memory addresses: a location in menory where data is stored a memory addresses can accessed with & (address-of operator)

    string name = "Bro";
    int age = 21;
    bool strudent = true;
    cout <<&name <<'\n';
    cout << &age<<'\n';
    cout << &strudent <<'\n';
    return 0;
}