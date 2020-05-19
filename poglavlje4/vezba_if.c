#include <stdio.h>

int main()
{
    int a,b;
    a = 0;
    b = 0;
    if(++a>0 || ++b>0){
        a++;
        b++;
    }
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    a = 0;
    b = 0;
    if(a++>0 && b++>0){
        a++;
        b++;
    }
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
