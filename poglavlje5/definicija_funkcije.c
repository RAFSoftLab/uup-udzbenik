#include <stdio.h>

// deklaracija funkcije
int jeProstBroj(int broj);

int main()
{
    int m,n,i;
    printf("Unesite dva broja (interval):\n");
    scanf("%i%i", &m, &n);
    printf("Prosti brojevi u intervalu od %i do %i su:\n", m, n);
    for(i=m; i<=n; i++){
        if(jeProstBroj(i))
            printf("%i ", i);
        }
    return 0;
}

// definicija funkcije
int jeProstBroj(int broj){
    int i,jeProst=1;
    for(i=2;i<=broj/2;i++){
        if(broj%i==0){
            jeProst=0;
            break;
        }
    }
    return jeProst;
}

