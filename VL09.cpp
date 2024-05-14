#include <bits/stdc++.h>
using namespace std;
double gt (int n) {
    double gt = 1;
    for (int i = 1 ; i<=n; i++) {
        gt *= i;
    }
    return gt;
}
int main () {
    double x;
    int n;
    cin >> x >> n;
    double S = 0;
    for (int i = 1; i <= n; i++) {
        S += (pow (x,i)/(gt(i)));
    }
    cout << fixed << setprecision (2) << S;
}
