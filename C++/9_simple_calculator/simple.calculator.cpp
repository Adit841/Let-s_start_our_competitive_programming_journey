#include<iostream>
using namespace std;

int main (){
    int a,b;
    
    cout<<"Enter two number :";
    cin >> a >> b;
    int sum = a + b;
    int sub = a - b;
    int multi = a * b;
    int div = a / b;
    char oper;
    cout << "Enter calculator operator : ";
    cin >> oper;
    switch(oper){
        case '+':
            
            cout << sum;
            break;
        case '-':
            
            cout << sub;
            break;
        case '*':
            
            cout << multi;
            break;
        case '/':
            
            cout << div;
            break;
    }

    return 0;
}