// Write a program to display all Armstrong numbers from 1 to n.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        int temp = i;
        int digits = 0;

        // Count digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = i;
        int armstrong = 0;

        while (temp > 0) {
            int digit = temp % 10;

            int power = 1;

            for (int j = 0; j < digits; j++) {
                power *= digit;
            }

            armstrong += power;
            temp /= 10;
        }

        if (armstrong == i) {
            cout << i << " ";
        }
    }

    return 0;
}