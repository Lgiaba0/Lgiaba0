#include <bits/stdc++.h>
using namespace std;
main () {
    int n; cin >> n;
    long long a[n];
    long long res;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort (a, a + n);
    res = a[n-1] * a[n-2];
    cout << (res > (a[0] * a[1])? res * a[n-3] : (a[0] * a[1] * a[n-1]));
}
