#include <bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
    while (b != 0) {
        int du = a%b;
        a = b;
        b = du;
    }
    return a;
}
/*euclid:
- ước chung lớn nhất của a với b chính là ước chung lớn nhất của b và phần dư của b chia a
-> chỉ cần lặp lấy gcd (b, a%b) đến khi a%b bằng 0 thì khi đó giá trị cuối cùng của biến phía trước chính là
ước chung lớn nhất */
