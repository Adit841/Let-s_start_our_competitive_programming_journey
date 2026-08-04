#include <iostream>
using namespace std;

int main (){
    int age ;
    cout << "Enter your age : ";
    cin >> age;

    if(age >= 18){
        cout << "Welcome to the site";
    }else if( age < 0){
        cout << "You are not even born yet";
    }else if( age > 100){
        cout << "You are too old";
    }
    else{
        cout<<"You are not old enough";
    }
    return 0;
}