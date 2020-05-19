#include <stdio.h>

// deklaracija funkcije
void ispisiAkojeProst(int broj);

int main()
{
    int m,n,i;
    printf("Unesite dva broja (interval):\n");
    scanf("%i%i", &m, &n);
    printf("Prosti brojevi u intervalu od %i do %i su:\n", m, n);
    for(i=m; i<=n; i++){
        ispisiAkojeProst(i);
    }
    return 0;
}

// definicija funkcije
void ispisiAkojeProst(int broj){
    int i;
    for(i=2;i<=broj/2;i++){
        if(broj%i==0){
            return;
        }
    }
    printf("%d\n",broj);
}

