#include <bits/stdc++.h>
using namespace std;
main () {
    double a, b;
    char tt;
    cin >> a >> tt >> b;
        if (tt == '+') {cout << fixed << setprecision(2) << a + b;}
        else if (tt == '-') {cout << fixed << setprecision(2) << a - b;}
        else if (tt == '*') {cout << fixed << setprecision (2) << a*b;}
        else if (tt == '/') {
            if (b==0) {cout << "Math Error";}
            else {cout << fixed << setprecision (2) << a / b;}
        }
    }
