#include <stdio.h>

int main()
{
    int a, b;
    printf("Unesite prvi broj:");
    scanf("%d", &a);
    printf("Unesite drugi broj:");
    scanf("%d", &b);
    if(a>b){
       printf("Veci broj je %d", a);
    }else{
        printf("Veci broj je %d", b);
    }
    return 0;
}
