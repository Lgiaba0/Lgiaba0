#include <stdio.h>
#include <math.h>
int main () {
    int n;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        printf ("%d ", i);
    }
    printf ("\n");
    for (int i = 2; i <=n; i += 2) {
        printf ("%d ", i);
    }
}
