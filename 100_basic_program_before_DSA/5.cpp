#include<iostream>
using namespace std;

int main(){
    double length,breadth;
    cout << "Enter length and breadth:";
    cin >> length >> breadth;

    cout << "The area of rectangle is :" << length * breadth << endl;
    cout << "The perimeter of rectangle is :" << 2 * (length + breadth);

    return 0;
}