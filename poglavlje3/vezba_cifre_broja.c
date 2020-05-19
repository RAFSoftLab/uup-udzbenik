#include <stdio.h>

int main()
{
    printf("Unesite broj sa vise od dve cifre:\n");
    int n;
    scanf("%d",&n);
    int poslednjaCifra = n%10;   // ostatak pri deljenju sa 10 daje poslednju cifru
    n = n/10;  // sada je pretposlednja cifra unetog broja na poslednjem mestu
    int pretposlednjaCifra = n%10;
    printf("Dve poslednje cifre broja su %d i %d", pretposlednjaCifra, poslednjaCifra);
    return 0;
}
