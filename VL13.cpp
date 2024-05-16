#include <bits/stdc++.h>
using namespace std;
main () {
    long long n;
    cin >> n;
    long long sum = 0;
    if (n < 0) {
        cout << "NO";
    }
    else {
        for (long long i = 1; i < abs (n); i ++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n) {
            cout << "YES";
        }
        else cout << "NO";
    }
}
