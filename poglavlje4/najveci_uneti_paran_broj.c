#include <stdio.h>
#include <limits.h>

int main()
{
    int i, max = INT_MIN, br;
    for(i = 0; i<5; i++){
        do{
                printf("Unesite %i. paran broj: \n", i+1);
                scanf("%i", &br);

        }while(br%2!=0);
        if(br>max)
            max = br;
    }
    printf("Najveci uneti paran broj je %i\n", max);
    return 0;
}

