#include<iostream>
using namespace std;

void swap(string &x, string&y);
int main(){
    
    string x = "Ice";
    string y = "Water";

    swap(x,y);

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';
    return 0;
}

void swap(string &x, string&y){
    string temp;

    temp = x;
    x = y;
    y = temp;
}
