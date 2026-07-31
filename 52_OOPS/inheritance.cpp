#include <iostream>
using namespace std;

class Animal
{

public:
    bool alive = true;
    void eat(){
        cout << "This animal can eat";
    }
};

class Dog : public Animal{
    public: 
        void bark(){
            cout << "This dog can bark woof";
        }
};
class Cat : public Animal{
    public :
    void meow(){
        cout << "THis cat goes meow";
    }
};




int main(){
   // Inheritance = A class can revice attributes and methods from another class children classes inherit from a parent class helps to reuse similatr code found within multiple classses


   Dog dog;
    Cat cat;
    //  dog.eat();
        cat.eat();
    return 0;
}