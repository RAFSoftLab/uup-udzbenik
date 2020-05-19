#include <stdio.h>

int main()
{
    for(int i=2; i<100; i++){
        int j;
        for(j=2; j<=i/2; j++){
            if(i%j==0) break;
        }
        if(j > i/2)
            printf("Broj %i je prost broj\n", i);
    }
    return 0;
}

