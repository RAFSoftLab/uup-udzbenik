#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Unesite broj u decimalnom formatu:");
    scanf("%o",&n);
    printf("%d\n", n);
    printf("%x\n", n);
    printf("%o\n", n);

   printf("tri broja: %d  %d  %f", 2, 0xFF, 7.6);

    return 0;
}
