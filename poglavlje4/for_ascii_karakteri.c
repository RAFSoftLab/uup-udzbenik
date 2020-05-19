#include <stdio.h>

int main()
{
    int i;
    for(i='a'; i<='z'; i++){
        printf("%c  %c\n", i , i-('a'-'A'));
    }
    return 0;
}

