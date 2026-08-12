#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter a valiue to check wether is negative,positive or zero";
    cin >> n;
    if(n > 0){
        cout <<"It is a postive number: ";
    }else if(n < 0){
        cout << "It is a negative number: ";
    }else{
        cout<<"It is zero";
    }
    return 0;
}