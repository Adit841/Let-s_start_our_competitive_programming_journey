#include <iostream>
using namespace std;

int main (){

    // string students[] = {"Adi", "Patrick", "Squid"};

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    // int n = sizeof(students)/ sizeof(students[0]);
    int n = sizeof(grades)/ sizeof(grades[0]);
    for(int i =0 ; i < n; i++){
        cout << grades[i] << '\n';
     }
    return 0;
}