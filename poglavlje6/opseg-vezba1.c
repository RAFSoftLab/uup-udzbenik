#include <stdio.h>

 void m(int b){
    b+=4;
    printf("%d\n",b);
}

int main(){
    int b = 2;
    m(b);
    printf("%d", b);
    return 0;
}
