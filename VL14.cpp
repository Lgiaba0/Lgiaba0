#include <bits/stdc++.h>
using namespace std;
int ucln (int a, int b) {
    for (int i = max (abs(a),abs(b)); i >= min (abs(a),abs(b)); i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
}
int main () {
    int a, b;
    cin >> a >> b;
    cout << ucln (a, b);
}
