#include <bits/stdc++.h>
using namespace std;
long long gt (int n) {
    long long gt = 1;
    for (int i = 1; i <= n;i++) {
        gt *= i;
    }
    return gt;
}
int main () {
    int n;
    cin >> n;
    cout << gt(n);
}
