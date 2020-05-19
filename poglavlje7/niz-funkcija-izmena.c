#include <stdio.h>

void kvadriraj(int niz[10], int velicina){
    for(int i=0;i<velicina;i++){
        niz[i] = niz[i]*niz[i];
    }
}

void ispisiNiz(int niz[10], int velicina){
    for(int i=0;i<velicina;i++){
        printf("%d ",niz[i]);
    }
}

int main(){
    int nizBrojeva[] = {1, 9, 8, 5, 10};
    ispisiNiz(nizBrojeva,5);
    printf("\n");
    kvadriraj(nizBrojeva,5);
    ispisiNiz(nizBrojeva,5);
    return 0;
}


