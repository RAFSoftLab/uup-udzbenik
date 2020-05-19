# include <stdio.h>

main() {
	int i = 3;
	while (i-- > 0) {
		static int i = 100;
		printf("%d\n", --i);
	}
	printf("i = %d\n", i);
	
}
