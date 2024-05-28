#include <bits/stdc++.h>
using namespace std;
float sum (int a[], int n) {
    long long sum = 0;
    float  d = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            sum += a[i];
            d++;
        }
    }
    return (sum / d);
}
int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << fixed << setprecision (4) << sum (a, n);
}
