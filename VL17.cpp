#include <bits/stdc++.h>
using namespace std;
int dem (int a) {
    int dem = 0;
    for (int i = 1; i <= abs(a); i++) {
        if (a % i == 0) {
            dem += 1;
        }
    }
    return dem;
}
int main () {
    int a; 
    cin >> a;
    cout << dem (a);
}
