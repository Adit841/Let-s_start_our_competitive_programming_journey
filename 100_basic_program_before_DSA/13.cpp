#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout <<"Enter a b c :";
    cin>> a >> b >> c;

    if(a > b && a > c){
        cout<<a <<" is greate among "<<b <<" " << c;
    }else if(b > a && b > c){
        cout<< b <<" is greater than "<< a <<" "<< c;
    }else{
        cout<<c <<" is greater than "<< a <<" " << b;
    }
    return 0;
}