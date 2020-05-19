#include <stdio.h>

int main()
{
    int i, n;
    int zbir = 0;
    printf("Unesite broj n:\n");
    scanf("%i", &n);
    for(i=0; i<=n; i+=2){
        zbir +=i;
    }
    printf("Zbir parnih brojeva od 0 do %d jednak je %d.", n, zbir);
    return 0;
}

