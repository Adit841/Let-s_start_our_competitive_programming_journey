#include <iostream>
using namespace std;

int main(){
    double m1,m2,m3,m4,m5,total,average;
    cout << "Enter 5 subject marks :";
    cin >> m1 >> m2>> m3 >> m4 >> m5;
    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;

    cout << "The total marks of student is " << total << " and the average is " << average;
    return 0;
}