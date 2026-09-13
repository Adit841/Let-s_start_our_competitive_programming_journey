#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    d %= n;

    vector<int> temp(d);

    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n, d;
    cin >> n;

    vector<int> arr(n);

    for (int& x : arr) {
        cin >> x;
    }

    cin >> d;

    leftRotate(arr, d);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}