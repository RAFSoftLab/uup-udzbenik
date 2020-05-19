# include <stdio.h>
# include <math.h>

main() {
	double x, a, b, c;
	printf("x = ");
	scanf("%lf", &x);
	a = x;
	c = 0;
	while (a >= 2) {
		a /= 2; c++;
	}
	while (a < 1) {
		a *= 2; c--;
	}
	b = 1;
	while (b >= 2e-6) {
		a = a * a;
		b = b / 2;
		if (a >= 2) {
			a /=  2;
			c += b;
		}
	}
	printf("r = %lf, %lf\n", c, log(x)/log(2));	
}
