#include <stdio.h>
#include <math.h>
int main () {
	int n;
	scanf ("%d", &n); 
	for (int i = 1; i <= 200; i++) {
		printf ("%d ", i);
		if (i % 10 == 0) printf ("\n");
		if (i == n) break;
	}
}
