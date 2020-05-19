#include <stdio.h>

int main()
{
    int a;
    printf("Unesite broj ");
    scanf("%d", &a);
    if(a)
        printf("Broj je razlicit od nule");
    else
        printf("Broj je jednak nuli");
    return 0;
}
