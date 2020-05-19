# include <stdio.h>

main() {
	int m, mo, n, no, p;
	printf("m, n = ");
	scanf("%d%d", &mo, &no);
	m = mo;
	n = no;
	p = 0;
	while (n) {
		if (n %2)
			p += m;
		m <<= 1;
		n >>= 1;
	}
	printf("%d x %d = %d\n", mo, no, p);
}
