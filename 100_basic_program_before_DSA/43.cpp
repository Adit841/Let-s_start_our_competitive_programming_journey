// Write a program to find the sum of the first and last digit of a number n.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int value = n;
    int first_place = 0;
    int last_place = n % 10;
    while(n > 0){
        if(n <= 9){
            first_place = n;
        }
        n = n / 10;
        
    }
    int sum = first_place + last_place;
    cout << "In number " << value << " the first place is " << first_place << " and the last place is " << last_place << endl;

    cout << "The sum of " << first_place <<" and " << last_place <<" is" << sum << endl;
    return 0;
}
/*
    a better approach also 
    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int n;
        cin >> n;

        int last = n % 10;
        int first = n;

        while (first >= 10) {
            first /= 10;
        }

        int sum = first + last;

        cout << sum;

        return 0;
    }
*/