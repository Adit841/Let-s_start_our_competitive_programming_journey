#include <iostream>
using namespace std;

int main (){
    /*
        switch : alternaticve using many ig-else statements compare one value against matching cases
    */

    int month;
    cout <<"Enter a month";
    cin >> month;

    switch(month){
        case 1: 
            cout <<"It is januray";
            break;
        case 2: 
            cout <<"It is feb";
            break;
        case 3: 
            cout <<"It is mar";
            break;
        case 4: 
            cout <<"It is april";
            break;
        case 5: 
            cout <<"It is may";
            break;
        case 6: 
            cout <<"It is june";
            break;
        case 7: 
            cout <<"It is july";
            break;
        case 8: 
            cout <<"It is august";
            break;
        case 9: 
            cout <<"It is sept";
            break;
        case 10: 
            cout <<"It is oct";
            break;
        case 11: 
            cout <<"It is nov";
            break;
        case 12: 
            cout <<"It is dec";
            break;
        default:
            cout<< "Please enter number between 1-12";
    }

    return 0;
}