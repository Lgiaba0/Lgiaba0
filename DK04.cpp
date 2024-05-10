#include <bits/stdc++.h>
using namespace std;
main () {
    double a;
    cin >> a;
    int b = int (a);
    if ( a >= 0) {
        if (abs (a) - abs (b) >= 0.5) {cout << b + 1;}
        else cout << b;
    }
    else {
        if (abs (a) - abs(b) >= 0.5) {cout << b - 1;}
        else cout << b;
    }
}
