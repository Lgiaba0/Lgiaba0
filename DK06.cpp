#include <bits/stdc++.h>
using namespace std;
double nghiem (double a, double b) {
    double nghiem;
    nghiem = (-b)/a;
    return nghiem;
}
int main () {
    double a, b;
    cin >> a >> b;
    if (a==0) {
        if (b==0) {
            cout << "WOW";
        }
        else cout << "NO";
    }
    else cout << fixed << setprecision (2) << nghiem (a,b);
}
