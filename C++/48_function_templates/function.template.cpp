#include <iostream>
using namespace std;

template <typename T, typename U>
auto mymax(T x, U y){
      return (x > y) ? x : y;
}
int main(){

    // function template = describes what a function looks like. can be used to generate as many overloaded functions as needed, each using different data types


    cout << mymax(1,2) <<'\n';
    cout << mymax(1.1,2.4) <<'\n';
    cout << mymax('1','4') <<'\n';

    return 0;
}
