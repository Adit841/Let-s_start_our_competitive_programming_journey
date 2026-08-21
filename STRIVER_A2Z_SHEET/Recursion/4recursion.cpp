#include <bits/stdc++.h>
using namespace std;


// 1. Reverse an array using recursion
void reverseArray(int arr[], int i, int n) {
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);

    reverseArray(arr, i + 1, n);
}


// 2. Check whether a string is a palindrome using recursion
bool isPalindrome(const string& str, int i, int n) {
    if (i >= n / 2)
        return true;

    if (str[i] != str[n - i - 1])
        return false;

    return isPalindrome(str, i + 1, n);
}


int main() {

    // Reverse an array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;


    // Check palindrome
    string str = "ADITYA";

    if (isPalindrome(str, 0, str.length())) {
        cout << "String is palindrome";
    } else {
        cout << "String is not palindrome";
    }


    return 0;
}