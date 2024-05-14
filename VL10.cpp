#include <bits/stdc++.h>
using namespace std;
main () {
    string n;
    cin >> n;
    if (n[0]=='-') {
        cout << (n.size()) -1;
    }
    else cout << (n.size());
}
