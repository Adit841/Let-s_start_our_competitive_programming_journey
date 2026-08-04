#include <iostream>
using namespace std;

class Human{
    public: 
        string name;
        string occupation;
        int age;

        void eat(){
            cout << "This person can eat\n";
        }
        
        void drink(){
            cout << "This person can drink\n";
        }
        void sleep(){
            cout << "This person can sleep\n";
        }

};

int main(){

    //object = A collection of attributes and methods. They can have characteristics and could perform actions can be used to mimic real world items (ex. pjone,book) , Created from a class which acts as a "blue-print"

    Human human1;

    human1.name = "Aditya";
    human1.age = 21;
    human1.occupation = "Programmer";

    cout <<  human1.name <<'\n';
    cout <<  human1.age <<'\n';
    cout <<  human1.occupation <<'\n';

    human1.eat();
    human1.sleep();
    human1.drink();
    

    return 0;
}