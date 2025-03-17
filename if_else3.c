#include <stdio.h>
#include <math.h>
int main () {
	double  a, b, c, tb;
	char rank;
	scanf ("%lf %lf %lf", &a, &b, &c);
	tb = ((a + b + c) / 3);
	if ( tb >= 9.0 ) rank = 'A';
	else if (tb < 9.0 && tb >= 7.0) rank = 'B';
	else if ( tb < 7.0 && tb >= 5.0) rank = 'C';
	else rank = 'F';
	printf ("%c", rank);
}
