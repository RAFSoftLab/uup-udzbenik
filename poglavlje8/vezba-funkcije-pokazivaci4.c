#include <stdio.h>

void fniz(int niz[],int duzina){
    int a = niz[0];
    int *p = niz+duzina-1;
    niz[0] = *(p-1);
    *p = a;
}

int main(){
    int ary[3] = {10, 3, 0};
    fniz(ary,3);
    printf("%d, %d, %d", ary[0], ary[1], ary[2]);
    return 0;
}
