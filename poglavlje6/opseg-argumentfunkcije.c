#include <stdio.h>

void increment(int x);

int main(){
    int x = 10;
    printf("x pre funkcije %d\n", x);
    increment(x);
    printf("x posle funkcije %d", x);
    return 0;
}

void increment(int x){
    x = x+1;
}

