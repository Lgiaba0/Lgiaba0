#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check (int n) {
    for (int i = 2; i <= sqrt (n); i++){
        if ( n % i == 0) {
            return false;
        }
    } 
    return true;
} 
int main () {
    int n;
    scanf ("%d", &n);
    if (check (n) == false || n < 2) printf ("NO");
    else printf ("YES");
}
