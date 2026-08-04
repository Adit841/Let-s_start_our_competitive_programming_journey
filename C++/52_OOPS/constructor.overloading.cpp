#include <iostream>
using namespace std;

class Pizza{
    public:
        string topping1;
        string topping2;
        Pizza(string topping1){
            this-> topping1 = topping1;
        }
        Pizza(string topping1, string topping2){
            this-> topping1 = topping1;
            this-> topping2 = topping2;
        }
};

int main(){
    // constructor overloading = multiple constructors with the same name but different parameters alllows for varying arguments when instantiating an object

    Pizza pizza1("Paneer");
    Pizza pizza2("Mushrooms","mustard");

    cout << pizza2.topping1 << '\n';
    cout << pizza2.topping2 << '\n';
    return 0;
}