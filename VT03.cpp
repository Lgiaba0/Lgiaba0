#include <bits/stdc++.h>
using namespace std;
bool check (long long a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return true;
        }
    }
    return false;
} 
int main () {
    int n, x;
    cin >> n >> x;
    long long a[n]; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (check (a, n, x) == true) {
        cout << "YES";
    }
    else cout << "NO";
}
