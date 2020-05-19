#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int m,n;
    printf("Unesite dva broja, prvo mani pa veci:\n");
    scanf("%d%d",&m,&n);
    int slucajan_broj = rand()%(n-m+1)+m;
    printf("%d ", slucajan_broj);

}
