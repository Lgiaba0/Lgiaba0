#include <bits/stdc++.h>
using namespace std;
main () {
   long long a, b;
   cin >> a >> b;
   int chia3 = 0;
   for ( long long i = max (a,b) -1 ; i > min (a,b); i--) {
      if (i % 3 == 0) {
         cout << i << " " ;
         chia3++;
      }
   }
   if (chia3 == 0) {
      cout << "NOT FOUND";
   }
}
