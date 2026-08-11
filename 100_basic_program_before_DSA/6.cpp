#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter two numbers to swap:";
    cin >> a >> b;
    cout << "Before swapping value of a and b is " << a << " " << b << endl;
    c = b;
    b = a;
    a = c;
    
    cout << "After swapping value of a and b "<< a << " " <<  b << endl;
    return 0;
}