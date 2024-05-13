#include <bits/stdc++.h>
using namespace std;
long long sum (int n) {
    long long sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main () {
    int a;
    cin >> a;
    cout << sum (a);
}
