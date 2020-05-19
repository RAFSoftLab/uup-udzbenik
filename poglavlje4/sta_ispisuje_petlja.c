#include <stdio.h>

int main()
{
    int i = -3, j=0;
    while (i<0 || j<1){
        i++;
        if(i==-2)
            continue;
        j++;
        printf("Iteracija\n");
    }
    printf("%d",j);
}

