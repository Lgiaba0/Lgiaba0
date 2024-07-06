#include <bits/stdc++.h>
using namespace std;
main () {
    int n; cin >> n;
    long long a[n];
    pair <int, int> res;
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }
    res = {a[0], a[1]};
    for (int i = 2; i < n; i++) {
        if (res.first + res.second <= a[i-1] + a[i]) {
            res = {a[i-1], a[i]};
        }
    }
    if (res.first + res.second <= a[n - 1] + a[0]) {
        cout << a[n - 1] << " " << a[0] << endl;
    }
    else cout << res.first << " " << res.second << endl; 
}
