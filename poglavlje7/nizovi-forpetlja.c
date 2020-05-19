#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int VELICINA_NIZA = 10;

int main(){
    int niz[VELICINA_NIZA];
    srand(time(0));
    for(int i=0;i<VELICINA_NIZA;i++){
        niz[i] = rand()%100;
    }
    for(int i=0;i<VELICINA_NIZA;i++){
        printf("%d  ",niz[i]);
    }
    return 0;
}

