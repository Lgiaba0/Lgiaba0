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
    if (b == 0) {
        cout << "INVALID";
    }
    else if (a % b == 0) {
        cout << a / b;
    }
    else {
        if (b < 0) {
            cout << -(a / ucln (a, b)) << " " << -(b / ucln (a, b));
        }
        else cout << a/ucln (a,b) << " " << b/ucln (a,b);
    }
}
