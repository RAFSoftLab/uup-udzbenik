#include <stdio.h>

int main()
{
    int broj;
    do{
        printf("Unesite broj deljiv sa tri: \n");
        scanf("%i", &broj);
    }while(broj%3!=0);
    printf("%i / 3 = %i", broj, broj/3);
    return 0;
}

