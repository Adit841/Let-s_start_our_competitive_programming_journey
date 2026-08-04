#include <iostream>
using namespace std;

enum DAY {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thrusday = 4, friday = 5, saturday = 6};

int main(){

    //enums = a user defined data type that contains of paired named integer constants. Great if you have a set of potential options
    

    DAY today = sunday;

    switch(today){

        case sunday : cout << "Its sunday!\n";
                        break;
        case monday : cout << "Its monday!\n";
                        break;
        case tuesday : cout << "Its tuesday!\n";
                        break;
        case wednesday : cout << "Its wednesday!\n";
                        break;
        case thrusday : cout << "Its thrusday!\n";
                        break;
        case friday : cout << "Its friday!\n";
                        break;
        case saturday : cout << "Its saturday!\n";
                        break;
    }


    return 0;
}