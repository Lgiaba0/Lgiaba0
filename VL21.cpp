#include <bits/stdc++.h>
using namespace std;
int x (int n) {
    int sum = 0, i = 0;
    while (sum <= n) {
    i++;
    sum += i;
    }
    return i-1;
}
int main () {
    int n; 
    cin >> n;
    cout << x(n);
}
