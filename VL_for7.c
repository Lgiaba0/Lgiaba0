#include <stdio.h>
#include <math.h>
int main () {
    for (int i = 1; i <= 10; i++) {
        for (int a = 1; a <= 10; a++) {
            printf ("%d ", i * a);
        }
        printf ("\n");
    }
} 
