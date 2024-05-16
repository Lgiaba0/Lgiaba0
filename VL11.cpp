#include <bits/stdc++.h>
using namespace std;
bool check (int n) {
    for (int i = 2; i <= sqrt (n); i++) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
    return true;
}
int main () {
    int n;
    cin >> n;
    if (check (n) == false || n < 2) {
        cout << "NO";
    }
    else cout << "YES";
}
