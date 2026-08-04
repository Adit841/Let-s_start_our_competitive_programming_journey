#include <iostream>
using namespace std;

double getTotal(double prices[], int n);
int main (){

    double prices[]= {49.99, 50.75, 75, 45};
    int n = sizeof(prices)/ sizeof(prices[0]);
    double total = getTotal(prices,n);

    cout << "$" << total;
    return 0;
}

double getTotal(double prices[], int n){
    double total = 0 ;
    for(int i = 0; i < n; i++){
        total += prices[i];
    }
    return total;
}