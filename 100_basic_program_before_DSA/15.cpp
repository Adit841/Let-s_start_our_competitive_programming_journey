#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter year to find if it is leap year or not: ";
    cin >> year;

    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
        cout <<"The "<<year<<" is a leap year";
    }else{
        cout<<"THe "<<year<< " is not a leap year ";
    }
    return 0;
}