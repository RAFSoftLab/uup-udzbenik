#include <stdio.h>

int main()
{
    int n;
    printf("Unesite broj: ");
    scanf("%i", &n);
    int faktorijel = 1;
    while(n>0){
            faktorijel = faktorijel * n;
            --n;
    }
    printf("Vrednost faktorijela je %d", faktorijel);
    return 0;
}

