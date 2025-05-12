#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check (int n) {
    if ((int)sqrt(n) * (int)sqrt (n) == n) return true;
    else return false;
}
int main () {
    int n; 
    scanf ("%d", &n);
    if (n < 0) printf ("%d khong la so chinh phuong", n);
    else if (check (n) == false) printf ("%d khong la so chinh phuong", n);
    else printf ("%d la so chinh phuong", n); 
}
