#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a value to check if it is even or odd :";
    cin >> n;

    if(n % 2 == 0){
        cout << "It is even";
    }else{
        cout << "It is odd";
    }
    return 0;
}