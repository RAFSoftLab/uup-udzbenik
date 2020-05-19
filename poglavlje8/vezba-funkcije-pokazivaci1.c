#include <stdio.h>

void f(int *pok1, int *pok2){
    *pok1 = 3;
    (*pok1)++;
    *pok2 = *pok1+2;
}

int main(){
    int x = 1, y = 2;
    f(&x,&y);
    printf("%d, %d",x, y);
    return 0;
}

