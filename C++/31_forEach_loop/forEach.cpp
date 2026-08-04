#include <iostream>
using namespace std;

int main (){

    // forEach = loop that eases the traversel over an  uterable data set

    string students[] = {"Adi", "Patrick", "Squid"};
    for(string students : students){
        cout << students << '\n';
    }

    return 0;
}