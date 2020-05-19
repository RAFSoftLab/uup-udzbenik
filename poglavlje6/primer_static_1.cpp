# include <stdio.h>

void C() {
	static int bp = 0;
	printf("bp = %d\n", ++bp);
}
void B() {
	C();
}
void A() {
	C(); C();
}
main() {
	int k;
	for (k = 1; k <= 3; k++) {
		A(); B();
	}	
}
