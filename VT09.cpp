#include <bits/stdc++.h>
using namespace std;
bool check (int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main () {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort (a, a + n);
    for (int i = 0; i < n; i++) {
        if (check (a[i]) && a [i] != a[i - 1]) {
            cout << a [i] << " ";
        }
    }
}
