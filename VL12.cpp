#include <bits/stdc++.h>
using namespace std;
void lk (int n) {
    for (int i = abs(n); i >=1; i--) {
        if (n % i ==0) {
            cout << i << " ";
        }
    }
}
int main () {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "INF";
    }
    else
    lk (n);
}
