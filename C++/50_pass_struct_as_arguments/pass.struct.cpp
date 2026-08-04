#include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    double gpa;
    bool enrolled;    
};
int main(){

    // struct = A struct that group relaeated variables under one name; structs can contain many different data types(string, int, double, bool, etc). variables in a struct are known as members. members can be access with. "class member access operators"

    student student1;
    student1.name = "Booty";
    student1.age = 20;
    student1.enrolled = true;
    student1.gpa = 1.1;


 
    return 0;
}
