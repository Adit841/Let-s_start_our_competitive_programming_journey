#include<iostream>
using namespace std;

void printInfo(const string name, const int age);

int main(){

    // const patrameter = parameter that is effectively read - only code is more secure and conveys intent useful for references and pointers

    string name = "Aditya";
    int age = 21;
    printInfo(name,age);
    return 0;
}


void printInfo(const string name, const int age){
    name = " ";
    age = 0;
    cout << name << '\n';
    cout << age << '\n';

}