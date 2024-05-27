#include <bits/stdc++.h>
using namespace std;
int dem (long long a[], int n, long long x) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            dem ++;
        }
    }
    return dem;
} 
int main () {
    int n;
    long long x;
    cin >> n >> x;
    long long a[n]; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << dem (a,n,x);
}
