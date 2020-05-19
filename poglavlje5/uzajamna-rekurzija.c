#include <stdio.h>

int neparan(int broj);
int paran(int broj);

int main (){
    int broj;
    printf("Unesite broj: \n");
    scanf("%d", &broj);
    if(neparan(broj))
        printf("%d je neparan\n",broj);
    else
        printf("%d je paran\n",broj);
    return 0;
}

int neparan(int broj){
    if (broj==0)
        return 0;
    else
        return paran(broj-1);
}

int paran(int broj){
    if(broj==0)
        return 1;
    else
        return neparan(broj-1);
}

