#include <stdio.h>

int maksimumDvaBroja(int broj1, int broj2){
    int rezultat;
    if(broj1>broj2)
       rezultat = broj1;
    else
       rezultat = broj2;
    return rezultat;
}

int main()
{
   int a = 100;
   int b = 200;
   int rez;
   rez = maksimumDvaBroja(a, b);   // poziv funkcije i smestanje rezultata u promenljivu rez
   printf( "Maksimalna vrednost je : %d\n", rez );
   return 0;
}
