#include <bits/stdc++.h>
using namespace std;
main () {
    double a;
    cin >> a;
    int b = int (a);
    if ( a >= 0) {
        if (abs (a) - abs (b) >= 0.5) {b = b + 1;}
        else b = b;
    }
    else {
        if (abs (a) - abs(b) >= 0.5) {b = b - 1;}
        else b = b;
    }
    cout << b;
}
