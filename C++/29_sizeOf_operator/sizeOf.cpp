#include <iostream>
using namespace std;

int main (){

    // sizeOf()= detemeines the size in bytes of a: variable, data type, class, objects
    string name = "Aditya";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D' };
    cout << sizeof(gpa) << " bytes\n"; // 8 bytes
    cout << sizeof(name) << " bytes\n"; // 32 bytes
    cout << sizeof(grade) << " bytes\n"; // 1 bytes
    cout << sizeof(student) << " bytes\n"; // 1bytes
    cout << sizeof(grades) << " bytes\n"; // 4 bytes
    return 0;
}