#include <stdio.h>

int main(){
    int a = 0;
    while(a<3){
        int b = a;
        b++;
        a++;
    }
    printf("%d", a + b);
    return 0;
}

