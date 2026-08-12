//. Write a program to read the marks of a student and print the grade (A/B/C/D/Fail)

#include<iostream>
using namespace std;

int main(){
    double marks;
    cout << "Enter total marks:(1-100)";
    cin >> marks;

    if(marks >= 90){
        cout << "A";
    }else if(marks >= 80 && marks  < 90){
        cout << "B";
    }else if(marks >= 70 && marks < 80){
        cout <<"C";
    }else if(marks >=60 && marks < 70){
        cout << "D";
    }else{
        cout<<"Fail";
    }
    return 0;
}