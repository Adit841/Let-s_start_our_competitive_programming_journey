#include<iostream>
using namespace std;

int main(){
    /*
        Dynamic memory = Memory that is allocated after the program is already compiled & running. Use the new operator to allocate memory in the heap reather than the stack.

        useful when we dont know how much memory we will need. Makes our programs more flexible, especially when accepting uer input
    */

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    cout <<"aDDRESS: " << pNum <<'\n';
    cout <<"Value: " << *pNum <<'\n';

    delete pNum;




    char *pGrade = NULL;
    int size;
    cout <<"Enter value: ";
    cin >> size;
    pGrade = new char[size];

    for(int i =0; i <size; i++){
        cout << "Enter grade : " << i + 1<< ": ";
        cin >> pGrade[i];
    }
    for(int i =0 ; i < size; i++){
        cout << pGrade[i] << " ";
    }
    delete[] pGrade;
    return 0;
}
