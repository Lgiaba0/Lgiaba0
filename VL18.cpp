#include <bits/stdc++.h>
using namespace std;
int main () {
    string n;
    cin >> n;
    reverse (n.begin(), n.end());
    while (n[0] == '0') {
        n.erase (n.begin());
    }
    cout << n;
}
