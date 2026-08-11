#include <iostream>
using namespace std;

int main(){
    int a , b;
    cout << "Enter value of number to swap: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;

    return 0;
}