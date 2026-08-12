#include<iostream>
using namespace std;
int main(){
    int a , b ,c;
    cout << "Enter threee number to check which is small: ";
    cin >> a >> b >> c;
    
    if(a < b && a < c){
        cout <<a << " is less than " << b <<" " << c;
    }else if(b < a && b < c){
        cout << b << " is less than " << a << " " << c;
    }else{
        cout <<c << " is less than " << a <<" " << b;
    }
    return 0;
}