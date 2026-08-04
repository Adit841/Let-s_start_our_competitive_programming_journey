#include <iostream>
using namespace std;

int main(){
    //ternary operation is an alternative og if-else statemnet 
    // condition ? expression1 : epxression2;
    int a ;
    cout << "Enter a value:";
    cin >> a;

    a < 18 ? cout << "You are not old" : cout << "You are old";

    return 0;
}