#include <stdio.h>

int main(){
    int *p;
    int niz[10];
    p = niz;
    *p = 8;
    *(niz+1) = 10;
    printf("%d\n",niz[0]);
    printf("%d\n",p[1]);
    printf("%d\n",*niz);
}

