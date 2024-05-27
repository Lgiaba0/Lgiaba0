#include <bits/stdc++.h>
using namespace std;
void lonthunhi (long long a[],int n) {
    bool check;
    sort (a, a + n);
    for (int i = n - 1; i >=0 ; i--) {
        if (a[i] < a[n-1]) {
            cout << a [i];
            return;
        }
    }
    cout << "NOT FOUND";
}
int main () {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a [i];
    }
    lonthunhi (a, n);
}
