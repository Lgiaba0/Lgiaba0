#include <bits/stdc++.h>
using namespace std;
long long cltc (long long n) {
    long long cltc = 0;
    for (long long i = 0; i <= ((3*n) + 1); i++) {
        if (i % 2 == 0) {
            cltc -= i;
        }
        else cltc += i;
    }
    return cltc;
}
int main () {
    long long n;
    cin >> n;
    cout << cltc (n); 
}
