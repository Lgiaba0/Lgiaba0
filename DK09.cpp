#include <bits/stdc++.h>
using namespace std;
main () {
    long long year;
    cin >> year;
    if (year > 0 && year <=10000) {
        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {cout << "YES";}
        else cout << "NO";
    }
    else cout << "INVALID";
}
