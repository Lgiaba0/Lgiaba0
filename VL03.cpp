#include <bits/stdc++.h>
using namespace std;
long long sum (int n) {
    long long sum = 0;
    for (int i = 2; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main () {
    int n;
    cin >> n;
    cout << sum (n) + (2*n);
}
