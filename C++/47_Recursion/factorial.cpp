#include <iostream>
using namespace std;

int factorail(int number);


int main(){

    cout << factorail(5);
    return 0;
}

int factorail(int number){
   if(number > 1){
    return number * factorail(number - 1);
   }   else{
    return 1;
   }
}