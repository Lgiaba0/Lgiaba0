#include <stdio.h>
#include <math.h>
int main () {
	int a;
	double t = 40;
	scanf ("%d", &a);
	if (a <= 50) t += (a*0.5);
	else if (a > 50 && a <= 200) t += (25 + ((a - 50) * 0.3));
	else t += (25 + 45 + ((a - 200)*0.2)); 
	printf ("%d", (int) t);
}
