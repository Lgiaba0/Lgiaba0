#include <stdio.h>
#include <math.h>
int main () {
    int a;
    float b, c;
    scanf ("%d", &a);
    printf ("Luong = %d\n", a);
    if (a <= 7) {
        b = a * 0.2;
    } 
    else if (a > 7 && a <= 15) {
        b = a * 0.3 ;
    }
    else b = a * 0.4 ;
    printf ("Thue thu nhap = %0.2f\n", b);
    c = (a - b);
    printf ("Tien luong thuc nhan = %0.2f\n", c);
}
