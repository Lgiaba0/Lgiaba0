#include <bits/stdc++.h>
using namespace std;
main() {
double a, b, c;
cin >> a >> b >> c;
if (a==0.0) {
    if (b == 0.0) {
        if (c==0.0) cout << "WOW"; else cout << "NO";
    }
    else cout << fixed << setprecision(2) << -c/b;
} 
else {
    double delta = b*b - 4*a*c;
if (delta < 0.0) {cout << "NO";}
else if (delta == 0.0){cout << fixed << setprecision(2) << (-b)/2*a;}
else if (delta > 0.0) { 
    double x1 = (-b + sqrt (delta))/(2*a);
    double x2 = (-b - sqrt (delta ))/(2*a);
    cout << fixed << setprecision(2) << min (x1,x2) << " " << max (x1,x2);
} else cout << "NO";  }
}
