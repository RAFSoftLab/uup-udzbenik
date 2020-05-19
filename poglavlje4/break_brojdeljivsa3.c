#include <stdio.h>

int main()
{
    int broj;
    while(1){
        printf("Unesite broj deljiv sa tri: \n");
        scanf("%i", &broj);
        if(broj%3==0)
            break;
    }
    printf("%i / 3 = %i", broj, broj/3);
    return 0;
}

