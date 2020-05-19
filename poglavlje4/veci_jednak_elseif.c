#include <stdio.h>

int main()
{
    int a, b;
    printf("Unesite prvi broj:");
    scanf("%d", &a);
    printf("Unesite drugi broj:");
    scanf("%d", &b);
    if(a==b)
       printf("Uneti brojevi su jednaki");
    else if(a>b)
       printf("Prvi broj je veci");
    else
       printf("Drugi broj je veci");
    return 0;
}
