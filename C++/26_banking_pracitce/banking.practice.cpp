#include <iostream>
using namespace std;
int totalBalance(int balance){
    return balance;
}
int deposit(){
    return 0;
}
int withdraw(int balance){
    return 0;
}
int main(){
    
     int balance = 0;
     int choice = 0 ;
   do{
    
    cout << "*************************************\n";
    cout << "Enter your choice: \n";
    cout << "************************************* \n";

    cout << "1. Show Balance \n";
    cout << "2. Deposit balance \n";
    cout << "3. Withdraw balance \n";
    cout << "4. Exit \n";

    cin >> choice;

    switch(choice){
        case 1 :
            totalBalance(balance);
            break;
        case 2 :
            balance += deposit();
            break;
        case 3 : 
            balance -= withdraw(balance);
            break;
        case 4 : 
            cout << "Thanks for visiting";
            break;
        default:
            cout << "select between 1 - 4";
    }
   }while(choice != 4);
    
    cout << "*************************************";
    
    return 0;
}