#include <bits/stdc++.h>
using namespace std;
main () {
    int n;
    bool check = false;
    while (cin >> n)
    if (n < 0) {
        cout << n << ' ';
        check = true;
    }
    if (n==0) {
        if (check== false) cout << "NOT FOUND";
    }
}
