#include <bits/stdc++.h>
using namespace std;
double gt (int n) {
    double gt = 1;
    for (int i = 1; i <= n;i++) {
        gt *= i;
    }
    return gt;
}
int main () {
    int n, k;
    cin >> n >> k;
    cout << gt(n) / (gt(k) * gt(n-k));
}
