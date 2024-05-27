#include <bits/stdc++.h>
using namespace std;
long long max (long long a[], int n) {
    long long res =LONG_LONG_MIN;
    for (int i = 0; i < n; i++) {
        res = max (res, a[i]);
    }
    return res;
}
int main () {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << max (a, n);
}
