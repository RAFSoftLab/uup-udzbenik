#include <stdio.h>

int main()
{
    char karakter;
    char prethodniKarakter;
    prethodniKarakter = getchar();
    putchar(prethodniKarakter);
    while((karakter = getchar()) != '\n'){
        if(prethodniKarakter==karakter)
            continue;
        putchar(karakter);
        prethodniKarakter = karakter;
    }
    return 0;
}

