#include <bits/stdc++.h>
using namespace std;
int main () {
    long long a [11];
    for ( int i = 1; i <= 10; i++) {
        cin >> a[i];
    }
    bool check = true;
    long long x; cin >> x;
    for (int i = 1; i <= 10; i++) {
        if (a[i] == x) {
            cout << i << " ";
            check = false;
        }
    }
    if (check == true ) {
        cout << -1;
    }
}
