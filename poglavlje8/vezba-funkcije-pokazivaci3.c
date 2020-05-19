#include <stdio.h>

void f(int *pok1){
    pok1++;
    (*pok1)++;
    pok1++;
    *pok1 = *(pok1-2);
}

int main(){
    int pom[] = {4,5,6} ;
    f(pom);
    printf("%d, %d, %d", pom[0], pom[1], pom[2]);
    return 0;
}

