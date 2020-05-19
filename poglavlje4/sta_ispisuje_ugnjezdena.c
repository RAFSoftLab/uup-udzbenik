#include <stdio.h>

int main()
{
    int i = 0, j;
    do{
       i++;
       if(i%2!=0)
            continue;
       printf("%d ",i);
       j = i;
       while(j>0){
             j--;
             if(j>2)
                break;
             printf("%d\n",j);
          }
     }while(i<6);
}

