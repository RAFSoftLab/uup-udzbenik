#include <stdio.h>

int zameni_brojeve(int *broj1, int *broj2);

int main(){
    int a = 4, b = 7;
    printf("Pre zamene: a=%d, b=%d\n", a, b);
    zameni_brojeve(&a, &b);  // prosledjujemo adrese promenljivih
    printf("Posle zamene: a=%d, b=%d", a, b);
    return 0;
}

void zameni_brojeve(int *broj1, int *broj2){
    int pom;
    pom = *broj1;
    *broj1 = *broj2;
    *broj2 = pom;    
}

