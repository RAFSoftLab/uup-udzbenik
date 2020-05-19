#include <stdio.h>

int main()
{
    int i;
    for(i=97; i<=122; i++){
        printf("%c  %c\n", i , i-32);
    }
    return 0;
}
