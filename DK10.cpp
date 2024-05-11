#include <bits/stdc++.h>
using namespace std;
main () {
    long long year;
    int month;
    cin >> month >> year;
    if (year < 0 || month < 1 || month > 12) {
        cout << "INVALID";
    }
    else {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            cout << 31;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            cout << 30;
        }
        else if (month == 2) {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                cout << 29;
            }
            else {
                cout << 28;
            }
        }
    }
}
