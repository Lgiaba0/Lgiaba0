#include <bits/stdc++.h>
using namespace std;
bool cp (long long a) {
if ( a < 0 ) return false;
else {
    if ( (long long) sqrt (a) * (long long )sqrt (a) == a) {
        return true;
    }
    else return false;
}
}
int main () {
    long long a;
    cin >> a;
    if (cp (a)) cout << "YES";
    else cout << "NO"; 
}
