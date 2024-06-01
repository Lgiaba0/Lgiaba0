#include <bits/stdc++.h>
using namespace std;
long long max (int a[], int n) {
    long long max = LONG_LONG_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}
long long min (int a[], int n) {
    long long min = LONG_LONG_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}
int main () {
    int n; cin >> n;
    int a [n];
    for (int i = 0; i < n; i ++) {
        cin >> a [i];
    }
    cout << max (a, n) - min (a, n);
}
