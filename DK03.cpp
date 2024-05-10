#include <bits/stdc++.h>
using namespace std;
int kc (int a, int b) {
    int kc;
    if (a > b) {
        kc = a - b;
    }
    else kc = b - a;
    return kc;
}
int main () {
    int a, b;
    cin >> a >> b;
    cout << kc (a,b );
}
