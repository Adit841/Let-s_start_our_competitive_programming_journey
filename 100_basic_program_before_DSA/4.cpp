#include <iostream>
using namespace std;

int main(){
    double r;
    cout << "Enter the radius: ";
    cin >> r;

    cout << "The area of circle is :" << (3.14) * r * r << endl;
    cout << "The perimeter of circle is :" << 2 * (3.14) * r << endl;
    return 0;
}