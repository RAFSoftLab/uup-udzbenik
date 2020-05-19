#include <stdio.h>

int main()
{
    int i = 5;
    do{
        int j = 3;
        do{
            int k;
            scanf("%d",&k);
            printf("%d %d %d\n",i,j,k);
            j--;
        }while(j>0);
        i--;
    }while(i>0);
    return 0;
}

