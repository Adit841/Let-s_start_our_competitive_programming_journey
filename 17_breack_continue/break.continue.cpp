#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 20; i++){
        if(i == 14){
            break;
        }
        cout << i << '\n';
    }
    for(int j = 1; j <= 20; j++){
        if(j == 14){
            continue;
        }
        cout << j << '\n';
    }
    return 0;
}