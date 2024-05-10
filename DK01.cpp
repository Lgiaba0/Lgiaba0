#include <bits/stdc++.h>
using namespace std;
int check ( int a, int b) {
    if (a > b) {
        return a;
    }
    else return b;
}
int main () {
    int a, b;
    cin >> a >> b;
    cout << check (a, b) ;
}
