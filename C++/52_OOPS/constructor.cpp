#include <iostream>
using namespace std;

class Student{
    public: 
        string name;
        int age;
        double gpa;

        Student(string name, int age, double gpa){
            this-> name = name;
            this-> age = age;
            this-> gpa = gpa;
        }
};

int main(){
    //constructors = special method that is automatically called when an object is instanitaed useful for asigning values to attributions as arguments

    Student student1("Aditya", 21, 3.4);
    Student student2("Anshu", 21, 1.4);
    Student student3("Dev", 28, 2.4);

    cout << student1.name << '\n';
    cout << student1.age << '\n';
    cout << student1.gpa << '\n';

    cout << student2.name << '\n';
    cout << student2.age << '\n';
    cout << student2.gpa << '\n';
    
    
    cout << student3.name << '\n';
    cout << student3.age << '\n';
    cout << student3.gpa << '\n';
    
    return 0;
}