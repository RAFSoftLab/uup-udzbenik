#include <stdio.h>

int x = 5;

void m(int x){
    x++;
    printf("%d\n",x);
}

void main(){
    m(x);
    printf("%d", x);
}

