#include<iostream>
using namespace std;

void bakePizza(){
   cout << "Here is your pizza"; 
}
void bakePizza(string topping1){
   cout << "Here is your pizza with "<< topping1 << '\n'; 
}
void bakePizza(string topping1,string topping2){
   cout << "Here is your pizza with "<< topping1 <<" & "<< topping2<< '\n'; 
}
int main(){
    bakePizza("panner","pepperoni");

   return 0;
}
