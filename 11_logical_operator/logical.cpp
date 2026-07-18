#include <iostream>
using namespace std;

int main(){
    // && = check if both the condition is true 
    // || = Either of one condition true will works
    // ! =  reverse the logical stament
    int temp ;
    cout << "Enter the temp : ";
    cin >> temp;

    if(temp > 0 && temp < 30){
        cout << "Temp is normal";
    }else{
        cout << "Temp is bad";
    }
    if(temp <= 0 || temp < 30){
        cout << "Temp is normal";
    }else{
        cout << "Temp is bad";
    }

    
    return 0;
}