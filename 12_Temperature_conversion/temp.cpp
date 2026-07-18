#include<iostream>
using namespace std; 

int main(){
    double c;
    double f;

    cout << "Enter value of celsius:";
    cin >> c;
    cout << "Enter calue of farehnite :";
    cin >> f;

    c = (f - 32) * (5.0 / 9.0);
    cout << c << '\n';

    f = (c * (9.0/5.0)) + 32;
    cout << f;

    return 0;
}