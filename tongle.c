#include <stdio.h>
#include <math.h>
long long sumle (int n) {
	long long res = 0;
	for (int i = 1; i <= n; i+=2) {
		res += i;
	}
	return res;
}
int main () {
	int n;
	scanf ("%d", &n);
	printf ("%ld", sumle (n));
}
