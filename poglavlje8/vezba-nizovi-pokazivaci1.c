#include <stdio.h>

int main(){
    int ary[3] = {3, 2, 1};
    int *p = ary;
    p++;
    *p = *ary+4;
    printf("%d, %d, %d", ary[0], ary[1], ary[2]);
    return 0;
}

