#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name:";
    getline(cin, name);
    cout << name.length();
    cout << name.empty();
    name.clear();
    name.append("hola");
    cout << name.at(2);
    name.insert(0, "@");
    cout << name;
    name.find(' ');
    name.erase(0,3);
    return 0;
}