#include <stdio.h>

int x = 9;

void funkcija(){
    x+=2;
    printf("%d  ",x);
}

int main(){
    int x = 4;
    funkcija();
    printf("%d",x);
    return 0;
}

