#include <iostream>
using namespace std;

int main(){
    double seconds,minute,hour;
    cout << "Enter toal number of seconds: ";
    cin >> seconds;

    minute = seconds / 60;
    hour  = seconds / 3600;

    cout << "The total number of seconds is " <<seconds <<"seconds the minute is "<<minute<<"minute the hour is "<< hour <<"hour"<< endl; 
    return 0;
}