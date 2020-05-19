#include<stdio.h>

void obradi();

int main(){
    int x=40;
    printf("x=%d",x);
    obradi();
    printf("\nx=%d",x);
    return 0;
}
void obradi(){
    int x=80;
    printf("\nx=%d",x);
}

