#include <stdio.h>

int main(){
    int ary[4] = {1, 2, 3, 4};
    int *p;
    p = ary + 3;
    *p = 5;
    p--;
    *p = *(p-1);
    printf("%d, %d, %d, %d\n", ary[0], ary[1], ary[2], ary[3]);
    return 0;
}

