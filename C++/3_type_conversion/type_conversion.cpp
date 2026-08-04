#include <iostream>
using namespace std;

int main(){

    
    /*
        type conversion = conversion of a value to one data type to another
                        Implicit = automatic
                        Explicit = precede value with new data type for ex (int)
    */

    double x = (int)3.14;

    // cout << x;


    char y = 100;

    // cout << y;

    int correct = 8;
    int question = 10;
    double score = correct/(double)question * 100;
    cout << score << "%";
    return 0;
}