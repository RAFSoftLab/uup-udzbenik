#include <stdio.h>
int main()
{
    int i;
    printf("Unesite broj od 1 do 7: \n");
    scanf("%d", &i);
    switch(i){
        case 1: printf("Ponedeljak"); break;
        case 2: printf("Utorak"); break;
        case 3: printf("Sreda"); break;
        case 4: printf("Cetvrtak"); break;
        case 5: printf("Petak"); break;
        case 6: printf("Subota"); break;
        case 7: printf("Nedelja"); break;
        default: printf("Pogresan broj");
    }
    return 0;
}

