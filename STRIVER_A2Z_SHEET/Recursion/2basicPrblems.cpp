#include <bits/stdc++.h>
using namespace std;


// 1. Print name N times
void printName(int i, int n, string name) {
    if (i > n) return;

    cout << name << endl;

    printName(i + 1, n, name);
}


// 2. Print numbers from 1 to N
void printOneToN(int i, int n) {
    if (i > n) return;

    cout << i << " ";

    printOneToN(i + 1, n);
}


// 3. Print numbers from N to 1
void printNToOne(int n) {
    if (n < 1) return;

    cout << n << " ";

    printNToOne(n - 1);
}


// 4. Print numbers from 1 to N using backtracking
void printOneToNBacktracking(int i, int n) {
    if (i > n) return;

    printOneToNBacktracking(i + 1, n);

    cout << i << " ";
}


// 5. Print numbers from N to 1 using backtracking
void printNToOneBacktracking(int i, int n) {
    if (i > n) return;

    printNToOneBacktracking(i + 1, n);

    cout << i << " ";
}


int main() {

    int n;
    cin >> n;

    // Uncomment the function you want to test.

    // 1. Print name N times
    // printName(1, n, "Aditya");

    // 2. Print 1 to N
    // printOneToN(1, n);

    // 3. Print N to 1
    // printNToOne(n);

    // 4. Print 1 to N using backtracking
    // printOneToNBacktracking(1, n);

    // 5. Print N to 1 using backtracking
    // printNToOneBacktracking(1, n);

    return 0;
}