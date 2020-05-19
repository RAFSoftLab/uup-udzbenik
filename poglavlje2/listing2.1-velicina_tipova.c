#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    printf("velicina tipa int je %zu, najmanja vrednost je %d, a najveca vrednost %d \n", sizeof(int), INT_MIN, INT_MAX);
    printf("velicina tipa unsigned int je %zu, najveca vrednost %d \n", sizeof(unsigned int),  UINT_MAX);
    printf("velicina tipa short je %zu, najmanja vrednost je %d, a najveca vrednost %d \n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("velicina tipa long je %zu, najmanja vrednost je %ld, a najveca vrednost %ld \n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("velicina tipa unsigned long je %zu, najveca vrednost %lu \n", sizeof(unsigned long), ULONG_MAX);
    return 0;
}
