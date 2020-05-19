# include <stdio.h>
# include <math.h>

main() {
	double xp, xn;
	double a, epsilon;
	printf("a = "); scanf("%lf", &a);
	printf("epsilon = "); scanf("%lf", &epsilon);
	xn = 1.0;
	do {
		xp = xn;
		xn = (xp + a / xp) / 2.0;
	} while (fabs(xn-xp) >= epsilon);
	printf("sqrt(%lf) = %lf\n", a, xn);
}
