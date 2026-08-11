#include<iostream>
using namespace std;

int main(){
    double c , f;
    cout << "Enter the temperature in the celsius:";
    cin >> c;

    f = (c * (9/5)) + 32;
    cout << "This is the farehnit value of " << c <<" celsius = "<< f << endl;
    return 0;
}