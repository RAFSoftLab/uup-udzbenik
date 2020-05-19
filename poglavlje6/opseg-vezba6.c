#include <stdio.h>

int main(){
    int a = 0;
    while(a<3){
        static int b = 5;
        b++;
        a++;
        printf("%d  %d\n",a, b);
    }
    return 0;
}

