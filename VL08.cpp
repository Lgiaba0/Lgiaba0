#include <bits/stdc++.h>
using namespace std;
long long tsc (int a, int b) {
    long long sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}
int main () {
    int a, b;
    cin >> a >> b;
    cout << tsc (a, b);
}
