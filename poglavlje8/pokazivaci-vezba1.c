#include <stdio.h>

int main(){
    int *x;
    int y = 5;
    int *z = &y;
    x = z;
    *x = 10;
    y = 20;
    printf("%d, %d, %d", *x,y,*z);
    return 0;
}
